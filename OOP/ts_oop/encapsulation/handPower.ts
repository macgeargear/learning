export enum ComparisonResult {
    Win,
    Lose,
    Draw,
}

export enum Rank {
    Nothing=0,
    OnePair=1,
    TwoPairs=2,
    ThreeOfAKind=3,
    Straight=4,
    Flush=5,
    FullHouse=6,
    FourOfAKing=7,
    StraightFlush=8,
}

export class HandPower {
    constructor(public readonly rank: Rank, public readonly highs: number[]) {}

    private compareHighs(handPower: HandPower): ComparisonResult {
        
    }
}