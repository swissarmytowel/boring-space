#include <iostream>
#include <Player.hpp>

#include <utilities.hpp>

int main(int argc, char *argv[])
{
    const auto WINDOW_FLAGS = SDL_WINDOW_SHOWN;
    const auto RENDERER_FLAGS = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;

    const auto WINDOW_DIMENSIONS = util::Point2D(300, 400);

    util::uWindow window = nullptr;
    util::uRenderer renderer = nullptr;
    util::uTexture sprites = nullptr;

    entity::Player e(util::Point2D(64, 64), {0, 0, 64, 64}, util::AnimationInformation{}, 5.6);

    try
    {
        util::initializeSdlSystems(SDL_INIT_EVERYTHING, IMG_INIT_PNG);

        window = util::createWindow("test", WINDOW_DIMENSIONS, WINDOW_FLAGS);
        renderer = util::createRenderer(RENDERER_FLAGS, window);
        sprites = util::loadTexture(renderer, "1.png");
    }
    catch (util::SDLException &exception)
    {
        std::cerr << exception.what() << std::endl;
    }

    util::event keyboardEvent{};
    auto keyEvents = SDL_GetKeyboardState(nullptr);

    while (keyboardEvent.type != SDL_QUIT)
    {
        SDL_RenderClear(renderer.get());

        SDL_SetRenderDrawColor(renderer.get(), 0, 0, 0, 255);
        util::rectangle dst = {static_cast<int>(e.getCenteredPosition().getX()),
                               static_cast<int>(e.getCenteredPosition().getY()), e.getClipRectangle().w,
                               e.getClipRectangle().h};
        SDL_RenderCopy(renderer.get(), sprites.get(), &e.getClipRectangle(), &dst);

        SDL_RenderPresent(renderer.get());

        SDL_PollEvent(&keyboardEvent);

        if(keyboardEvent.type == SDL_KEYDOWN)
        {
            if (keyEvents[SDL_SCANCODE_LEFT])
            {
                e.update(entity::Direction::LEFT);
            }

            if (keyEvents[SDL_SCANCODE_SPACE]) std::cout << "space\n";

            if (keyEvents[SDL_SCANCODE_RIGHT])
            {
                e.update(entity::Direction::RIGHT);
            }
        }
    }

    util::quitSdlSystems();
    return EXIT_SUCCESS;
}