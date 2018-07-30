#pragma once

#include <Entity.hpp>

namespace entity
{
    class Player: public Entity
    {
    public:
        Player() = default;
        Player(const util::Point2D &position,
               const util::rectangle &clipRectangle,
               const util::AnimationInformation &animationInformation,
               double speed);

        void move(const util::Point2D &modifier) override;;

        void update(Direction direction) override;
    };
}