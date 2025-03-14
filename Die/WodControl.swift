//
//  WodControl.swift
//  Die
//
//  Created by Thomas Lee on 12/03/2025.
//


import SwiftUI

struct WodControl: View {
    @Binding var sliderValue: Double
    @State private var isSpecialtyOn: Bool = false
    let buttonHeight = 50.0
    let numButtonRows = 5
    private let defaultSpacing = 8.0
    private func totalHeight() -> CGFloat{
        let heightOfButtons = (Double(numButtonRows) * buttonHeight)
        let heightOfSpacing = (Double(numButtonRows) - 1.0) * defaultSpacing
        return heightOfButtons + heightOfSpacing
    }
    
    var onButtonPress: (Int) -> Void
    var specialtyToggled: (Bool) -> Void
    
    private func createButton(_ number: Int) -> some View {
        Button(action: {
            onButtonPress(number)
        }) {
            Text("\(number)")
                .font(.title)
                .frame(maxWidth: .infinity)
                .frame(minHeight: buttonHeight)
                .background(.black)
                .foregroundColor(.white)
                .cornerRadius(10)
        }
    }
    
    func buttonGrid(geometry: GeometryProxy) -> some View {
        Grid {
            ForEach(0..<numButtonRows - 1, id: \.self) { row in
                GridRow {
                    
                    ForEach(0 ..< 3, id: \.self) { col in
                        let num = 1 + (row * 3 + col)
                        createButton(num)
                    }
                }
            }
            GridRow {
                createButton(13)
                Button(action: {
                    isSpecialtyOn.toggle()
                    specialtyToggled(isSpecialtyOn)
                }) {
                    Text("Specialty")
                        .font(.title)
                        .frame(maxWidth: .infinity)
                        .frame(minHeight: buttonHeight)
                        .background(isSpecialtyOn ? Color.blue : Color.gray)
                        .foregroundColor(.white)
                        .cornerRadius(10)
                }
                .gridCellColumns(2)
            }
        }
        .frame(width: geometry.size.width * 0.7)
    }
    
    func sliderContainer(geometry: GeometryProxy) -> some View {
        
        GeometryReader { geometry in
            VStack(alignment: .center) {
                HStack {
                    Spacer()
                    Text("\(Int(sliderValue))")
                        .font(.headline)
                    Spacer()
                }
                
                VerticalSlider(
                    value: $sliderValue,
                    range: 2...10
                )
                .frame(width: geometry.size.width)
            }
        }
        .frame(width: geometry.size.width * 0.2, height: totalHeight())
    }
    
    func mainContentView(geometry: GeometryProxy) -> some View {
        HStack(spacing: 0) {
            Spacer()
            
            buttonGrid(geometry: geometry)
            
            sliderContainer(geometry: geometry)
            
            Spacer()
        }
    }
    
    var body: some View {
        GeometryReader { geometry in
            mainContentView(geometry: geometry)
        }
        .frame(height: totalHeight())
    }
}

struct WodControl_Previews: PreviewProvider {
    static var previews: some View {
        PreviewWrapper()
    }
    
    struct PreviewWrapper: View {
        @State private var sliderVal: Double = 6.0
        
        var body: some View {
            WodControl(
                sliderValue: $sliderVal,
                onButtonPress: { num in print(num) },
                specialtyToggled: { b in print(b) }
            )
        }
    }
}
