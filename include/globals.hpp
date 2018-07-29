#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <cmath>

namespace globals
{
    struct GlobalConstants
    {
        static const auto WINDOW_WIDTH = 400;
        static const auto WINDOW_HEIGHT = 600;

        static const auto SDL_INIT_FLAGS = SDL_INIT_EVERYTHING;
        static const auto SDL_IMG_FLAGS = IMG_INIT_PNG;

        static const auto WINDOW_FLAGS = SDL_WINDOW_SHOWN | SDL_WINDOW_ALLOW_HIGHDPI;
        static const auto RENDERER_FLAGS = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;

        static const auto SPRITE_WIDTH = 64;
        static const auto SPRITE_HEIGHT = 64;
    };
}