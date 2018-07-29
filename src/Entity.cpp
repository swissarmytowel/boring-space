#include<Entity.hpp>

const util::Point2D &entity::Entity::getCenteredPosition() const
{
    return _centeredPosition;
}

void entity::Entity::setCenteredPosition(const util::Point2D &centeredPosition)
{
    Entity::_centeredPosition = centeredPosition;
}

const util::rectangle &entity::Entity::getClipRectangle() const
{
    return _clipRectangle;
}

void entity::Entity::setClipRectangle(const util::rectangle &clipRectangle)
{
    Entity::_clipRectangle = clipRectangle;
}

const util::rectangle &entity::Entity::getBbox() const
{
    return _bbox;
}

void entity::Entity::setBbox(const util::rectangle &bbox)
{
    Entity::_bbox = bbox;
}

bool entity::Entity::isAlive() const
{
    return _isAlive;
}

void entity::Entity::setIsAlive(bool isAlive)
{
    Entity::_isAlive = isAlive;
}

const util::AnimationInformation &entity::Entity::getAnimationInformation() const
{
    return _animationInformation;
}

void entity::Entity::setAnimationInformation(const util::AnimationInformation &_animationInformation)
{
    Entity::_animationInformation = _animationInformation;
}

uint16_t entity::Entity::getHealth() const
{
    return _health;
}

void entity::Entity::setHealth(uint16_t health)
{
    Entity::_health = health;
}

double entity::Entity::getMovementSpeed() const
{
    return _movementSpeed;
}

void entity::Entity::setMovementSpeed(double movementSpeed)
{
    Entity::_movementSpeed = movementSpeed;
}

const util::Point2D entity::Entity::getRelativePosition() const
{
    const auto x = _centeredPosition.getX() - static_cast<double>(_clipRectangle.w) / 2.0;
    const auto y = _centeredPosition.getY() + static_cast<double>(_clipRectangle.h) / 2.0;

    return {x, y};
}
