#include <Asteroid.hpp>

entity::Asteroid::Asteroid(const util::Point2D &position,
                           const util::rectangle &clipRectangle,
                           const util::AnimationInformation &animationInformation,
                           double speed)
    : Entity(position, clipRectangle, animationInformation, speed, 0)
{}

void entity::Asteroid::move(const util::Point2D &modifier)
{
    _centeredPosition += modifier;
}

void entity::Asteroid::update(entity::Direction direction)
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
        case Direction::DOWN:
        {
            _centeredPosition.addToY(_movementSpeed);
        }
        default:
        {
            break;
        }
    }
}

