#pragma once

#include <iostream>
#include <vector>
#include <random>
#include <exception>
#include <memory>
#include <ctime>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#include <Point2D.hpp>

namespace util
{
    using rectangle = SDL_Rect;
    using event = SDL_Event;

    struct ScoreInfo
    {
        ScoreInfo(unsigned int currentScore, unsigned int highScore)
            : currentScore(currentScore), highScore(highScore)
        {};
        unsigned int currentScore;
        unsigned int highScore;
    };

    struct AnimationInformation
    {
        std::vector<rectangle> animationClips;
        double changeRate;
    };

    class SDLException: public std::exception
    {
    public:
        explicit SDLException(std::string message);

        const char *what() const throw() override;

    private:
        std::string _message;
    };

    class SdlDeleter
    {
    public:
        void operator()(SDL_Texture *texture);
        void operator()(SDL_Window *window);
        void operator()(SDL_Renderer *renderer);
        void operator()(TTF_Font *font);
    };

    // Shared ptr with deleter class
    template<class T, class D = std::default_delete<T>>
    class SharedPtr: public std::shared_ptr<T>
    {
    public:
        explicit SharedPtr(T *pointer = nullptr)
            : std::shared_ptr<T>(pointer, D())
        {}
        // Hides and 'overrides' non-virtual function from std::shared_ptr
        void reset(T *pointer = nullptr)
        {
            std::shared_ptr<T>::reset(pointer, D());
        }
    };

    // Unique pointers to SDL main types
    using uTexture = std::unique_ptr<SDL_Texture, SdlDeleter>;
    using uWindow = std::unique_ptr<SDL_Window, SdlDeleter>;
    using uRenderer = std::unique_ptr<SDL_Renderer, SdlDeleter>;
    using uFont = std::unique_ptr<TTF_Font, SdlDeleter>;

    // Shared pointers to SDL main types
    using sTexture = SharedPtr<SDL_Texture, SdlDeleter>;
    using sWindow = SharedPtr<SDL_Window, SdlDeleter>;
    using sRenderer = SharedPtr<SDL_Renderer, SdlDeleter>;
    using sFont = SharedPtr<TTF_Font, SdlDeleter>;

    // Initializer and deinitializer functions for SDL
    void initializeSdlSystems(Uint32 sdlFlags, Uint32 imageFlags);

    void quitSdlSystems();

    uTexture loadTexture(uRenderer &r, const std::string &path);
    uTexture createTextureFromText(uRenderer &r, uFont &font, const std::string &text);

    uWindow createWindow(const std::string &title, const Point2D &dimensions, Uint32 flags);
    uRenderer createRenderer(Uint32 flags, uWindow &window);

    const double generateRandom(double lower, double upper);

    const std::string getAssetsPath();
}