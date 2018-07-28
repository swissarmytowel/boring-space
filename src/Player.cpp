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
            _centeredPosition.addToX(-_movementSpeed);
            break;
        }
        case Direction::RIGHT:
        {
            _centeredPosition.addToX(_movementSpeed);
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
    : Entity(position, clipRectangle, animationInformation, speed)
{}
