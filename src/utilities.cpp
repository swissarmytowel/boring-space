#include <utilities.hpp>

void util::initializeSdlSystems(Uint32 sdlFlags, Uint32 imageFlags)
{
    auto sdlErrorCode = SDL_Init(sdlFlags);
    if (sdlErrorCode < 0) throw SDLException("SDL cannot be initialized!");

    auto imgErrorCode = IMG_Init(imageFlags);
    if (imgErrorCode < 0) throw SDLException("SDL_image cannot be initialized!");
}

void util::quitSdlSystems()
{
    IMG_Quit();
    SDL_Quit;
}

util::uTexture util::loadTexture(util::uRenderer &r, const std::string &path)
{
    uTexture tmp(IMG_LoadTexture(r.get(), path.c_str()));
    if (tmp == nullptr) throw SDLException("Can not load texture " + path);
    return tmp;
}

util::uRenderer util::createRenderer(const Uint32 flags, uWindow &window)
{
    uRenderer renderer(SDL_CreateRenderer(window.get(), 0, flags));
    if (renderer == nullptr) throw SDLException("Can not create renderer");
    return renderer;
}

util::uWindow util::createWindow(const std::string &title, const Point2D &dimensions, const Uint32 flags)
{
    uWindow window(SDL_CreateWindow(title.c_str(),
                                    SDL_WINDOWPOS_CENTERED,
                                    SDL_WINDOWPOS_CENTERED,
                                    static_cast<int>(dimensions.getX()),
                                    static_cast<int>(dimensions.getY()),
                                    flags));
    if (window == nullptr) throw SDLException("Cannot create window");
    return window;
}

util::SDLException::SDLException(std::string message)
    : _message(std::move(message))
{}

const char *util::SDLException::what() const
{
    return _message.c_str();
}

void util::SdlDeleter::operator()(SDL_Texture *texture)
{
    if (texture) SDL_DestroyTexture(texture);
}

void util::SdlDeleter::operator()(SDL_Window *window)
{
    if (window) SDL_DestroyWindow(window);
}

void util::SdlDeleter::operator()(SDL_Renderer *renderer)
{
    if (renderer) SDL_DestroyRenderer(renderer);
}
