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
    
    var onButtonPress: (Int) -> Void
    var specialtyToggled: (Bool) -> Void
    
    private func createButton(_ number: Int) -> some View {
        Button(action: {
            onButtonPress(number)
        }) {
            Text("\(number)")
                .font(.title)
                .frame(maxWidth: .infinity)
                .frame(minHeight: 50)
                .background(.black)
                .foregroundColor(.white)
                .cornerRadius(10)
        }
    }
    
    var body: some View {
        GeometryReader { geometry in
            HStack(spacing: 10) {
                Grid() {
                    ForEach(0..<4) { row in
                        GridRow {
                            ForEach(0..<3) { col in
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
                                .frame(minHeight: 50)
                                .background(isSpecialtyOn ? Color.blue : Color.gray)
                                .foregroundColor(.white)
                                .cornerRadius(10)
                        }
                        .gridCellColumns(2)
                    }
                }
                .padding(.leading, 8)
                .frame(width: geometry.size.width * 0.85)
                
                VStack {
                    Text("\(Int(sliderValue))")
                        .font(.headline)
                    
                    VerticalSlider(
                        value: $sliderValue,
                        range: 2...10
                    )
                }
                .frame(width: geometry.size.width * 0.15)
            }
        }
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
