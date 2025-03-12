import SwiftUI

struct VerticalSlider: View {
    @Binding var value: Double
    var range: ClosedRange<Double>
    var thumbColor: Color
    var trackColor: Color
    var thumbSize: CGFloat
    var trackWidth: CGFloat
    
    init(value: Binding<Double>,
         range: ClosedRange<Double> = 0...1,
         thumbColor: Color = .blue,
         trackColor: Color = .gray.opacity(0.3),
         thumbSize: CGFloat = 20,
         trackWidth: CGFloat = 8) {
        self._value = value
        self.range = range
        self.thumbColor = thumbColor
        self.trackColor = trackColor
        self.thumbSize = thumbSize
        self.trackWidth = trackWidth
    }
    
    var body: some View {
        GeometryReader { geometry in
            ZStack(alignment: .bottom) {
                // Track
                Rectangle()
                    .fill(trackColor)
                    .frame(width: trackWidth, height: geometry.size.height)
                    .cornerRadius(trackWidth / 2)
                
                // Thumb
                Circle()
                    .fill(thumbColor)
                    .frame(width: thumbSize, height: thumbSize)
                    .offset(y: -thumbPosition(in: geometry))
                    .gesture(
                        DragGesture()
                            .onChanged { dragValue in
                                updateValueFromDrag(drag: dragValue, in: geometry)
                            }
                    )
            }
            .frame(width: max(thumbSize, trackWidth), height: geometry.size.height)
            .contentShape(Rectangle())
            .onTapGesture { location in
                let availableHeight = geometry.size.height - thumbSize
                
                // In a tap gesture, we get the location relative to the local coordinate space
                // We need to convert to the inverted percentage (since y increases downward)
                let invertedY = availableHeight - min(max(0, location.y - thumbSize/2), availableHeight)
                let percentage = Double(invertedY / availableHeight)
                
                // Map the percentage to the value range
                value = range.lowerBound + percentage * (range.upperBound - range.lowerBound)
            }
        }
    }
    
    private func thumbPosition(in geometry: GeometryProxy) -> CGFloat {
        let availableHeight = geometry.size.height - thumbSize
        let percentage = (value - range.lowerBound) / (range.upperBound - range.lowerBound)
        return availableHeight * CGFloat(percentage)
    }
    
    private func updateValueFromDrag(drag: DragGesture.Value, in geometry: GeometryProxy) {
        let availableHeight = geometry.size.height - thumbSize
        // Get the y coordinate within the view's coordinate space
        let dragLocationY = drag.location.y
        
        // Convert the position to a percentage (inverted since y increases downward)
        let invertedY = availableHeight - min(max(0, dragLocationY - thumbSize/2), availableHeight)
        let percentage = Double(invertedY / availableHeight)
        
        // Map the percentage to the value range
        value = range.lowerBound + percentage * (range.upperBound - range.lowerBound)
    }
}

// Preview and usage example
struct VerticalSliderExample: View {
    @State private var sliderValue: Double = 0.5
    
    var body: some View {
        VStack {
            Text("Value: \(sliderValue, specifier: "%.2f")")
                .padding()
            
            HStack {
                Spacer()
                
                VerticalSlider(
                    value: $sliderValue,
                    range: 0...1,
                    thumbColor: .blue,
                    trackColor: .gray.opacity(0.3),
                    thumbSize: 24,
                    trackWidth: 8
                )
                .frame(height: 300)
                
                Spacer()
            }
        }
        .padding()
    }
}

#Preview {
    VerticalSliderExample()
}
