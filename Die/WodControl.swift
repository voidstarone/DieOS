//
//  WodControl.swift
//  Die
//
//  Created by Thomas Lee on 12/03/2025.
//


import SwiftUI

struct WodControl: View {
    @Binding var sliderValue: Double
    
    var onButtonPress: (Int) -> Void
    
    var body: some View {
        GeometryReader { geometry in
            HStack(spacing: 10) {
                LazyVGrid(columns: Array(repeating: GridItem(.flexible(), spacing: 10), count: 3), spacing: 10) {
                    ForEach(1...12, id: \.self) { number in
                        Button(action: {
                            onButtonPress(number)
                        }) {
                            Text("\(number)")
                                .font(.title)
                                .frame(maxWidth: .infinity)
                                .frame(height: 70)
                                .background(.black)
                                .foregroundColor(.white)
                                .cornerRadius(10)
                        }
                    }
                }
                .padding()
                .frame(width: geometry.size.width * 0.85)
                
                VStack {
                    Text("\(Int(sliderValue))")
                        .font(.headline)
                    
                    GeometryReader { sliderGeometry in
                        VStack {
                            Spacer()
                            
                            Slider(
                                value: $sliderValue,
                                in: 2...10,
                                step: 1
                            )
                            .gesture(
                                DragGesture(minimumDistance: 0)
                                    
                            )
                            .rotationEffect(.degrees(-90))
                            .frame(width: sliderGeometry.size.height * 0.95)
                            .offset(x: -sliderGeometry.size.width * 0.25)
                            
                            Spacer()
                        }
                        .frame(width: sliderGeometry.size.width, height: sliderGeometry.size.height)
                    }
                }
                .frame(width: geometry.size.width * 0.15)
            }
            .frame(width: geometry.size.width, height: geometry.size.height)
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
                onButtonPress: { num in print(num) }
            )
        }
    }
}
