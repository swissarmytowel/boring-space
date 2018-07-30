#include <utilities.hpp>
#include <globals.hpp>


void util::initializeSdlSystems(Uint32 sdlFlags, Uint32 imageFlags)
{
    auto sdlErrorCode = SDL_Init(sdlFlags);
    if (sdlErrorCode < 0) throw SDLException("SDL cannot be initialized!");

    auto imgErrorCode = IMG_Init(imageFlags);
    if (imgErrorCode < 0) throw SDLException("SDL_image cannot be initialized!");

    auto ttfErrorCode = TTF_Init();
    if (ttfErrorCode < 0) throw SDLException("SDL_ttf cannot be initialized!");
}

void util::quitSdlSystems()
{
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
}

util::uTexture util::loadTexture(util::uRenderer &r, const std::string &path)
{
    std::string fullPath = SDL_GetBasePath();
    fullPath = fullPath.substr(0, fullPath.find_last_of("\\"));
    fullPath = fullPath.substr(0, fullPath.find_last_of("\\"));
    fullPath.append("\\assets\\sprites\\" + path);
    std::cout << fullPath;
    uTexture tmp(IMG_LoadTexture(r.get(), fullPath.c_str()));
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

const double ::util::generateRandom(double lower, double upper)
{
    static std::mt19937 generator(static_cast<unsigned int>(time(nullptr) * 1000));
    std::uniform_real_distribution<> distribution(lower, upper);

    return distribution(generator);
}

util::uTexture util::createTextureFromText(util::uRenderer &r, util::uFont &font, const std::string &text)
{
    uTexture texture(SDL_CreateTextureFromSurface(r.get(), TTF_RenderText_Solid(font.get(), text.c_str(), {255, 255, 255})));
    return texture;
}
const std::string util::getAssetsPath()
{
    std::string tmp = globals::BASE_PATH.substr(0, globals::BASE_PATH.find_last_of("\\"));
    tmp = tmp.substr(0, tmp.find_last_of("\\"));

    return tmp + "\\assets\\";
}

util::SDLException::SDLException(std::string message)
    : _message(std::move(message))
{}

const char *util::SDLException::what() const throw()
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

void util::SdlDeleter::operator()(TTF_Font *font)
{
    if (font) TTF_CloseFont(font);
}
