import SwiftUI

struct VerticalSlider: View {
    @Binding var value: Double
    var range: ClosedRange<Double>
    var thumbColor: Color
    var trackColor: Color
    var thumbSize: CGFloat
    var trackWidth: CGFloat
    
    // For tracking drag state
    @State private var isDragging = false
    
    // Computed property to determine if we should snap to integers
    private var shouldSnapToIntegers: Bool {
        return range.lowerBound.truncatingRemainder(dividingBy: 1) == 0 &&
               range.upperBound.truncatingRemainder(dividingBy: 1) == 0
    }
    
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
            HStack {
                Spacer()
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
                                    isDragging = true
                                    updateValueFromDrag(drag: dragValue, in: geometry)
                                }
                                .onEnded { _ in
                                    snapToClosestValue()
                                    withAnimation(.spring(response: 0.3, dampingFraction: 0.7)) {
                                        isDragging = false
                                    }
                                }
                        )
                        .animation(isDragging ? nil : .spring(response: 0.3, dampingFraction: 0.7), value: value)
                }
                .frame(width: max(thumbSize, trackWidth), height: geometry.size.height)
                .contentShape(Rectangle())
                .gesture(
                    DragGesture(minimumDistance: 0)
                        .onChanged { dragValue in
                            isDragging = true
                            updateValueFromDrag(drag: dragValue, in: geometry)
                        }
                        .onEnded { _ in
                            snapToClosestValue()
                            withAnimation(.spring(response: 0.3, dampingFraction: 0.7)) {
                                isDragging = false
                            }
                        }
                )
                Spacer()
            }
        }
    }
    
    private func thumbPosition(in geometry: GeometryProxy) -> CGFloat {
        let availableHeight = geometry.size.height - thumbSize
        let percentage = (value - range.lowerBound) / (range.upperBound - range.lowerBound)
        return availableHeight * CGFloat(percentage)
    }
    
    private func updateValueFromDrag(
        drag: DragGesture.Value,
        in geometry: GeometryProxy
    ) {
        let availableHeight = geometry.size.height - thumbSize
        
        let dragLocationY = drag.location.y - thumbSize / 2
        
        let invertedY = availableHeight - min(max(0, dragLocationY), availableHeight)
        let percentage = Double(invertedY / availableHeight)
        
        value = range.lowerBound + percentage * (range.upperBound - range.lowerBound)
    }
    
    private func snapToClosestValue() {
        if shouldSnapToIntegers {
            // Round to nearest integer
            value = Double(round(value))
            
            // Ensure value stays within range
            value = min(max(value, range.lowerBound), range.upperBound)
        }
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
