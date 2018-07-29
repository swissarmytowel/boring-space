#include <iostream>
#include <Player.hpp>
#include <Particle.hpp>

#include <globals.hpp>
#include <utilities.hpp>

int main(int argc, char *argv[])
{
    util::uWindow window = nullptr;
    util::uRenderer renderer = nullptr;
    util::uTexture sprites = nullptr;

    entity::Player e
        (util::Point2D((double) globals::GlobalConstants::WINDOW_WIDTH / 2.0,
                       globals::GlobalConstants::WINDOW_HEIGHT - (globals::GlobalConstants::SPRITE_HEIGHT
                           + globals::GlobalConstants::SPRITE_HEIGHT / 2)),
         {0, 0, globals::GlobalConstants::SPRITE_WIDTH, globals::GlobalConstants::SPRITE_HEIGHT},
         util::AnimationInformation{},
         5.6);

    try
    {
        util::initializeSdlSystems(globals::GlobalConstants::SDL_INIT_FLAGS, globals::GlobalConstants::SDL_IMG_FLAGS);

        window = util::createWindow("test",
                                    {globals::GlobalConstants::WINDOW_WIDTH, globals::GlobalConstants::WINDOW_HEIGHT},
                                    globals::GlobalConstants::WINDOW_FLAGS);
        renderer = util::createRenderer(globals::GlobalConstants::RENDERER_FLAGS, window);
        sprites = util::loadTexture(renderer, "2.png");
    }
    catch (util::SDLException &exception)
    {
        std::cerr << exception.what() << std::endl;
    }

    util::event keyboardEvent{};
    auto keyEvents = SDL_GetKeyboardState(nullptr);
    auto particles = visual::generateParticles(100, 0.0);

    while (keyboardEvent.type != SDL_QUIT)
    {
        SDL_RenderClear(renderer.get());

        SDL_SetRenderDrawColor(renderer.get(), 0, 0, 0, 255);

        for (auto &&particle : particles)
        {
            SDL_SetRenderDrawColor(renderer.get(), 255, 255, 255, 255);
            SDL_RenderDrawPoint(renderer.get(),
                                static_cast<int>(particle.getPosition().getX()),
                                static_cast<int>(particle.getPosition().getY()));
            particle.update();
            if (particle.getPosition().getY() >= globals::GlobalConstants::WINDOW_HEIGHT)
            {
                particle = visual::generateParticle(0.0, false);
            }
            SDL_SetRenderDrawColor(renderer.get(), 0, 0, 0, 255);
        }

        util::rectangle dst = {static_cast<int>(e.getRelativePosition().getX()),
                               static_cast<int>(e.getRelativePosition().getY()), e.getClipRectangle().w,
                               e.getClipRectangle().h};
        SDL_RenderCopy(renderer.get(), sprites.get(), &e.getClipRectangle(), &dst);

        SDL_RenderPresent(renderer.get());

        SDL_PollEvent(&keyboardEvent);

        if (keyboardEvent.type == SDL_KEYDOWN)
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