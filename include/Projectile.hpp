#pragma once

#include <Point2D.hpp>

#include <utilities.hpp>
#include <globals.hpp>
#include <Entity.hpp>

namespace entity
{
    class Projectile: public Entity
    {
    public:
        Projectile() = default;
        Projectile(const util::Point2D &position,
                   const util::rectangle &clipRectangle,
                   const util::AnimationInformation &animationInformation,
                   double speed,
                   double damage = 10.0);

        void move(const util::Point2D &modifier) override;;

        void update(Direction direction) override;
    };
}