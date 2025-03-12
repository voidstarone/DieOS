//
//  DieViewModel.swift
//  Die
//
//  Created by Thomas Lee on 01/03/2025.
//

import shared

struct RollResult: Hashable {
    let date = Date()
    let result: [Int]
    let successes: Int
    let difficultyRolledAt: Int
    let wasSpecialty: Bool
}

class DieViewModel: ObservableObject {
    
    let dri: DiceRollingSession
    @Published var rollHistory = [RollResult]()
    @Published var rollFieldText = ""
    @Published var successLowerBound = 6.0 {
        didSet {
            dri.successLowerBound = Int32(successLowerBound)
        }
    }
    @Published var doubleSuccessLowerBound: Int32 = Int32.max {
        didSet {
            dri.doubleSuccessLowerBound = doubleSuccessLowerBound
        }
    }
    
    
    init(dri: DiceRollingSession) {
        self.dri = dri
        dri.botchUpperBound = 1
        dri.successLowerBound = Int32(successLowerBound)
    }
    
    
    func triggerRoll(d10Count: Int) {
        let result = dri.resolveNotation(expression: "\(d10Count)d10")
        rollHistory.append(RollResult(
            result: result.diceCollectionRolls.first?.rolledResults as! [Int],
            successes: Int(truncating: result.diceCollectionRolls.first?.successes ?? KotlinInt(value: INT_MAX)),
            difficultyRolledAt: Int(successLowerBound),
            wasSpecialty: doubleSuccessLowerBound != Int32.max
        ))
    }
}
