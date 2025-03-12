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
                VStack(alignment: .leading) {
                    Spacer()
                    ForEach(viewModel.rollHistory, id: \.self) { roll in
                        HStack {
                            Text(roll.result.map({String($0)}).joined(separator: " "))
                                .font(.system(size: 36))
                            Spacer()
                            Text("\(roll.successes)@\(roll.difficultyRolledAt)")
                                .font(.system(size: 36))
                                .frame(alignment: .trailing)
                        }
                        .background(roll.successes < 0 ? .red : (roll.successes > 0 ? .green : .white))

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
                }
            )
        }
        .padding(8)
        .padding(.bottom, 30)
    }
}
