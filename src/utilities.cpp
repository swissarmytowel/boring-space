#include <utilities.hpp>

void ::util::initializeSdlSystems(Uint32 sdlFlags, Uint32 imageFlags)
{
    auto sdlErrorCode = SDL_Init(sdlFlags);
    if (sdlErrorCode < 0) throw SDLException("SDL cannot be initialized!");

    auto imgErrorCode = IMG_Init(imageFlags);
    if (imgErrorCode < 0) throw SDLException("SDL_image cannot be initialized!");
}

void ::util::quitSdlSystems()
{
    IMG_Quit();
    SDL_Quit;
}

util::uTexture util::loadTexture(util::uRenderer &r, const std::string &path)
{
    uTexture tmp(IMG_LoadTexture(r.get(), path.c_str()));
    if (tmp == nullptr) std::cerr << "Cannot load texture " << path << std::endl;
    return tmp;
}