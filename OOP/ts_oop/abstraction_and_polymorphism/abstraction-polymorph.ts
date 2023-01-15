interface DrawableEntity {
    draw(x: number, y: number): void
}

/* -------------------------------------------------------------------------- */
/*                                  game team                                 */
/* -------------------------------------------------------------------------- */
class GameRenderer {
    private x: number = 0
    private y: number = 0
    
    constructor(private entities: DrawableEntity[]) {}

    public render() {
        for (const entity of this.entities) {
            entity.draw(this.x, this.y)
        }
    }
}


/* -------------------------------------------------------------------------- */
/*                                  art team                                  */
/* -------------------------------------------------------------------------- */
class CharacterSkin1 implements DrawableEntity {
    draw(x: number, y: number): void {
        // draw main charactor
    }
}

class CharacterSkin2 implements DrawableEntity {
    draw(x: number, y: number): void {
        // draw main charactor
    }
}


/* -------------------------------------------------------------------------- */
/*                                   combine                                  */
/* -------------------------------------------------------------------------- */

const gameEntities: DrawableEntity[] = [new CharacterSkin1(), new CharacterSkin2()]
// both team can use instead of DrawableEntity, this is called "Polymorphism"
// Polymorphism -> use same interface or subclass come from same source
const renderEngine = new GameRenderer(gameEntities)
renderEngine.render()
