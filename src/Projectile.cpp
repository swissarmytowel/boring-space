#include<Projectile.hpp>

entity::Projectile::Projectile(const util::Point2D &position,
                               const util::rectangle &clipRectangle,
                               const util::AnimationInformation &animationInformation,
                               double speed,
                               double damage)
    : Entity(position, clipRectangle, animationInformation, speed, damage)
{

}
void entity::Projectile::move(const util::Point2D &modifier)
{

}

void entity::Projectile::update(entity::Direction direction)
{
    switch (direction)
    {
        case Direction::PREFFERED:
        {
            _centeredPosition.addToY(-_movementSpeed);
            break;
        }
        case Direction::UP:
        {
            _centeredPosition.addToY(-_movementSpeed);
            break;
        }
        default:
            break;
    }
}
