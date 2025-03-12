//
//  DieView.swift
//  Die
//
//  Created by Thomas Lee on 01/03/2025.
//

import SwiftUI

struct DieView: View {
    
    @ObservedObject var viewModel: DieViewModel
    
    var body: some View {
        VStack(alignment: .leading) {
            ScrollView {
                VStack(alignment: .leading, spacing: 0) {
                    Spacer()
                    ForEach(viewModel.rollHistory, id: \.self) { roll in
                        HStack {
                            Text(roll.result.map({String($0)}).joined(separator: " "))
                                .font(.system(size: 24))
                                .padding(.leading, 8)
                            Spacer()
                            Text("\(roll.successes)@\(roll.difficultyRolledAt)\(roll.wasSpecialty ? "S" : "")")
                                .font(.system(size: 24))
                                .frame(alignment: .trailing)
                                .padding(.leading, 4)
                                .padding(.trailing, 8)
                        }
                        .background(roll.successes < 0 ? .red : (roll.successes > 0 ? .green : .white))
                        .padding(.top, 1)
                        
                    }
                }
            }.defaultScrollAnchor(.bottom)
//            HStack {
//                TextField("2d6", text: $viewModel.rollFieldText)
//                Button(action: viewModel.triggerRoll) {
//                    Text("Roll")
//                }
//            }
            WodControl(
                sliderValue: $viewModel.successLowerBound,
                onButtonPress: { number in
                    viewModel.triggerRoll(d10Count: number)
                },
                specialtyToggled: { isOn in
                    viewModel.doubleSuccessLowerBound = isOn ? 10 : Int32.max
                }
            )
        }
        .padding(.bottom, 30)
    }
}
