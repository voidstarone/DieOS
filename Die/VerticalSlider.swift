import SwiftUI

struct VerticalSlider: View {
    @Binding var value: Double
    var range: ClosedRange<Double>
    var thumbColor: Color
    var trackColor: Color
    var thumbSize: CGFloat
    var trackWidth: CGFloat
    
    init(
        value: Binding<Double>,
        range: ClosedRange<Double> = 0...1,
        thumbColor: Color = .blue,
        trackColor: Color = .gray.opacity(0.3),
        thumbSize: CGFloat = 20,
        trackWidth: CGFloat = 8
    ) {
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
            .gesture(
                DragGesture(minimumDistance: 0)
                    .onChanged { dragValue in
                        updateValueFromDrag(drag: dragValue, in: geometry)
                    }
            )
        }
    }
    
    private func thumbPosition(in geometry: GeometryProxy) -> CGFloat {
        let availableHeight = geometry.size.height - thumbSize
        let percentage = (value - range.lowerBound) / (range.upperBound - range.lowerBound)
        return availableHeight * CGFloat(percentage)
    }
    
    private func updateValueFromDrag(drag: DragGesture.Value, in geometry: GeometryProxy) {
        let availableHeight = geometry.size.height - thumbSize
        
        let dragLocationY = drag.location.y - thumbSize / 2
        
        let invertedY = availableHeight - min(max(0, dragLocationY), availableHeight)
        let percentage = Double(invertedY / availableHeight)
        
        value = range.lowerBound + percentage * (range.upperBound - range.lowerBound)
    }
}

fileprivate struct VerticalSliderExample: View {
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
