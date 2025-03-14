//
//  DieView.swift
//  Die
//
//  Created by Thomas Lee on 01/03/2025.
//

import SwiftUI

struct DieView: View {
    
    @ObservedObject var viewModel: DieViewModel
    
    private func rollRow(_ roll: RollResult) -> some View {
        return HStack {
            Text((roll.result.map { num in
                String(num == 10 ? "0" : "\(num)")
            }).joined(separator: " "))
            .font(.system(size: 24))
            .padding(.leading, 8)
            Spacer()
            Text("\(roll.successes)@\(roll.difficultyRolledAt)\(roll.wasSpecialty ? "S" : "")")
                .font(.system(size: 24))
                .frame(alignment: .trailing)
                .padding(.leading, 4)
                .padding(.trailing, 8)
        }
    }
    
    private var results: some View {
        ScrollView {
            VStack(alignment: .leading, spacing: 0) {
                Spacer()
                ForEach(viewModel.rollHistory, id: \.self) { roll in
                    rollRow(roll)
                    .background(roll.successes < 0 ? .red : (roll.successes > 0 ? .green : .white))
                    .padding(.top, 1)
                }
            }
        }
        .defaultScrollAnchor(.bottom)
    }
    
    var body: some View {
        VStack(alignment: .leading) {
            results
            WodControl(
                sliderValue: $viewModel.successLowerBound,
                onButtonPress: { number in
                    viewModel.triggerRoll(d10Count: number)
                },
                specialtyToggled: { isOn in
                    viewModel.doubleSuccessLowerBound = isOn ? 10 : Int32.max
                }
            )
            .frame(maxWidth: .infinity)
            .fixedSize(horizontal: false, vertical: true)
        }
    }
}
