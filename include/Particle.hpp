#pragma once

#include <vector>
#include <random>

#include "Point2D.hpp"

#include <globals.hpp>
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

        void subtractFromY(double value);

        double getSpeed() const;
        void updateSpeed(double scaleFactor);

    private:
        double _speed;
        util::Point2D _position;
    };

    Particle generateParticle(double speedFactor, bool randomY=true);
    std::vector<Particle> generateParticles(std::size_t quantity, double speedFactor);
}