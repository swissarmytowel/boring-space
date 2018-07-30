#include <Player.hpp>

void entity::Player::move(const util::Point2D &modifier)
{
    _centeredPosition += modifier;
}

void entity::Player::update(entity::Direction direction)
{
    switch (direction)
    {
        case Direction::LEFT:
        {
            if (getRelativePosition().getX() <= 0) break;
            _centeredPosition.addToX(-_movementSpeed);
            break;
        }
        case Direction::RIGHT:
        {
            if (getRelativePosition().getX() + globals::GlobalConstants::SPRITE_WIDTH >= globals::GlobalConstants::WINDOW_WIDTH) break;
            _centeredPosition.addToX(_movementSpeed);
            break;
        }
        default:
        {
            break;
        }
    }
}

entity::Player::Player(const util::Point2D &position,
                       const util::rectangle &clipRectangle,
                       const util::AnimationInformation &animationInformation,
                       double speed)
    : Entity(position, clipRectangle, animationInformation, speed, 0)
{
}


