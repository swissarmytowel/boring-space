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
void visual::Particle::subtractFromY(double value)
{
    _position.addToY(-value);
}

void visual::Particle::updateSpeed(double scaleFactor)
{
    _speed += _speed * scaleFactor;
    std::cout << _speed << std::endl;
}

std::vector<visual::Particle> visual::generateParticles(std::size_t quantity, double speedFactor)
{
    auto particles = std::vector<Particle>(quantity);
    for (auto &&particle : particles)
    {
        particle = generateParticle(speedFactor);
    }
    return particles;
}

visual::Particle visual::generateParticle(double speedFactor, bool randomY)
{
    return {
        {util::generateRandom(0, globals::GlobalConstants::WINDOW_WIDTH),
         randomY ? util::generateRandom(0.0, globals::GlobalConstants::WINDOW_HEIGHT) : 0.0},
        util::generateRandom(1.0, 5.0 + 5.0 * speedFactor)};
}


