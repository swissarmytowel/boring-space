#include<Timer.hpp>

util::Timer::Timer()
{
    reset();
    setTimeScale();
    _deltaTime = std::chrono::duration<double>(0.0);
}

void util::Timer::reset()
{
    _startTime = std::chrono::system_clock::now();
}

const double util::Timer::getDeltaTime() const
{
    return _deltaTime.count();
}

void util::Timer::tick()
{
    _deltaTime = std::chrono::system_clock::now() - _startTime;
}
