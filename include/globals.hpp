#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <Timer.hpp>

namespace globals
{
    struct GlobalConstants
    {
        static constexpr auto WINDOW_WIDTH = 400;
        static constexpr auto WINDOW_HEIGHT = 600;

        static constexpr auto SDL_INIT_FLAGS = SDL_INIT_EVERYTHING;
        static constexpr auto SDL_IMG_FLAGS = IMG_INIT_PNG;

        static constexpr auto WINDOW_FLAGS = SDL_WINDOW_SHOWN | SDL_WINDOW_ALLOW_HIGHDPI;
        static constexpr auto RENDERER_FLAGS = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;

        static constexpr auto SPRITE_WIDTH = 64;
        static constexpr auto SPRITE_HEIGHT = 64;

        static constexpr auto FRAME_RATE = 60.0;

    };
    const std::string BASE_PATH = SDL_GetBasePath();
}