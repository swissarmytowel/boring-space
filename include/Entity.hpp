#pragma once

#include <Point2D.hpp>
#include <utilities.hpp>
#include <utility>

namespace entity
{
    enum class Direction
    {
        UP = 0,
        DOWN = 1,
        LEFT = 2,
        RIGHT = 3
    };

    class Entity
    {
    public:
        explicit Entity(const util::Point2D &position,
                        util::rectangle clipRectangle,
                        util::AnimationInformation animationInformation, double speed)
            : _centeredPosition(position), _clipRectangle(clipRectangle), _health(100), _isAlive(true), _bbox{},
              _animationInformation(std::move(animationInformation)), _movementSpeed(speed)
        {}

        virtual void move(const util::Point2D &modifier) = 0;
        virtual void update(Direction direction) = 0;

        const util::Point2D &getCenteredPosition() const;
        void setCenteredPosition(const util::Point2D &centeredPosition);

        const util::rectangle &getClipRectangle() const;
        void setClipRectangle(const util::rectangle &clipRectangle);

        const util::rectangle &getBbox() const;
        void setBbox(const util::rectangle &bbox);

        bool isAlive() const;
        void setIsAlive(bool isAlive);

        const util::AnimationInformation &getAnimationInformation() const;
        void setAnimationInformation(const util::AnimationInformation &animationInformation);

        uint16_t getHealth() const;
        void setHealth(uint16_t health);

        virtual ~Entity() = default;

    protected:
        util::Point2D _centeredPosition;

        util::rectangle _clipRectangle;
        util::rectangle _bbox;

        util::AnimationInformation _animationInformation;

        uint16_t _health;
        double _movementSpeed;
    public:
        double getMovementSpeed() const;
        void setMovementSpeed(double movementSpeed);
    protected:
        bool _isAlive;
    };
}