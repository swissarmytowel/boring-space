#pragma once

#include <chrono>

namespace util
{
    class Timer
    {
    public:
        static Timer &instance();
        void reset();
        void tick();

        const double getDeltaTime() const;

    private:
        Timer();
        std::chrono::system_clock::time_point _startTime;
        std::chrono::duration<double> _deltaTime;
    };
}