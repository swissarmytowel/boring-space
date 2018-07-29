#pragma once

#include <chrono>

namespace util
{
    class Timer
    {
    public:
        Timer();
        ~Timer() = default;

        void reset();
        void tick();

        const double getDeltaTime() const;

    private:
        std::chrono::system_clock::time_point _startTime;
        std::chrono::duration<double> _deltaTime;
    };
}