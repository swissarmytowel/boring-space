#pragma once

#include <vector>
#include <random>

#include "Point2D.hpp"
#include "utilities.hpp"

namespace visual
{
    class Particle
    {
    public:
        Particle() = default;
        Particle(const util::Point2D &position, double speed)
            : _position(position), _speed(speed)
        {}

        void update();

        const util::Point2D &getPosition() const;

        double getSpeed() const;

    private:
        double _speed;
        util::Point2D _position;
    };

    std::vector<Particle> generateParticles(std::size_t quantity);
}