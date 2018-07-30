#include <iostream>
#include <Game.hpp>

int main(int argc, char *argv[])
{
    std::unique_ptr<game::Game> game = nullptr;
    try
    {
        util::initializeSdlSystems(globals::GlobalConstants::SDL_INIT_FLAGS, globals::GlobalConstants::SDL_IMG_FLAGS);
        game = std::make_unique<game::Game>();
    }
    catch (util::SDLException &exception)
    {
        std::cerr << exception.what() << std::endl;
    }

    game->run();

    util::quitSdlSystems();
    return EXIT_SUCCESS;
}