#include <iostream>
#include <utilities.hpp>


int main(int argc, char *argv[])
{
    const Uint32 WINDOW_FLAGS = SDL_WINDOW_SHOWN;
    const Uint32 IMAGE_FLAGS = IMG_INIT_PNG;

    try
    {
        util::initializeSdlSystems(WINDOW_FLAGS, IMAGE_FLAGS);
    }
    catch (util::SDLException &exception)
    {
        std::cerr << exception.what() << std::endl;
    }

    util::quitSdlSystems();
    return EXIT_SUCCESS;
}