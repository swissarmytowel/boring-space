#include <Particle.hpp>

void visual::Particle::update()
{
    _position.addToY(_speed);
}

const util::Point2D &visual::Particle::getPosition() const
{
    return _position;
}

double visual::Particle::getSpeed() const
{
    return _speed;
}

std::vector<visual::Particle> visual::generateParticles(std::size_t quantity)
{
    auto particles = std::vector<Particle>(quantity);
    for (auto &&particle : particles)
    {
        particle =
            Particle({util::generateRandom(5, 300), util::generateRandom(5, 400)}, util::generateRandom(1.0, 5.0));
    }
    return particles;
}
