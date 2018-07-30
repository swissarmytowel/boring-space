#include <Game.hpp>

game::Game::Game()
    : _isRunning(true), _scoreInfo{0, 0}, _event{}, _player(), _particles(visual::generateParticles(250, 0.0))
{
    _window = util::createWindow("test",
                                 {globals::GlobalConstants::WINDOW_WIDTH, globals::GlobalConstants::WINDOW_HEIGHT},
                                 globals::GlobalConstants::WINDOW_FLAGS);
    _renderer = util::createRenderer(globals::GlobalConstants::RENDERER_FLAGS, _window);
    _sprites = util::loadTexture(_renderer, "2.png");

    const auto playerX = globals::GlobalConstants::WINDOW_WIDTH / 2.0;
    const auto playerY = globals::GlobalConstants::WINDOW_HEIGHT - globals::GlobalConstants::SPRITE_HEIGHT * 2;

    _player = {{playerX, playerY},
               {0, 0, globals::GlobalConstants::SPRITE_WIDTH, globals::GlobalConstants::SPRITE_HEIGHT},
               {},
               5.0};
    _events = SDL_GetKeyboardState(nullptr);
}

void game::Game::run()
{
    while (_isRunning)
    {
        util::Timer::instance().tick();
        if (util::Timer::instance().getDeltaTime() >= 1.0 / globals::GlobalConstants::FRAME_RATE)
        {
            SDL_RenderClear(_renderer.get());
            SDL_SetRenderDrawColor(_renderer.get(), 0, 0, 0, 255);

            updateParticles();
            renderParticles();

            updateEntities();
            renderEntities();

            SDL_RenderPresent(_renderer.get());
        }
        handleInput();
    }
}

void game::Game::updateEntities()
{

}

void game::Game::updateParticles()
{
    std::for_each(_particles.begin(), _particles.end(), [](visual::Particle &particle)
    {
        particle.update();
        if (particle.getPosition().getY() >= globals::GlobalConstants::WINDOW_HEIGHT)
        {
            particle = visual::generateParticle(0.0, false);
        }
    });
}

void game::Game::renderEntities()
{
    util::rectangle dstrect = {static_cast<int>(_player.getRelativePosition().getX()),
                               static_cast<int>(_player.getRelativePosition().getY()),
                               _player.getClipRectangle().w, _player.getClipRectangle().h};
    SDL_RenderCopy(_renderer.get(), _sprites.get(), &_player.getClipRectangle(), &dstrect);
}

void game::Game::renderParticles()
{
    SDL_SetRenderDrawColor(_renderer.get(), 255, 255, 255, 255);

    std::for_each(_particles.begin(), _particles.end(), [&](visual::Particle &particle)
    {
        SDL_RenderDrawPoint(_renderer.get(), static_cast<int>(particle.getPosition().getX()),
                            static_cast<int>(particle.getPosition().getY()));
    });
    SDL_SetRenderDrawColor(_renderer.get(), 0, 0, 0, 255);
}

void game::Game::handleInput()
{
    if (_event.type == SDL_KEYDOWN)
    {
        if (_events[SDL_SCANCODE_LEFT]) _player.update(entity::Direction::LEFT);
        if (_events[SDL_SCANCODE_RIGHT]) _player.update(entity::Direction::RIGHT);
    }
    if (_event.type == SDL_QUIT) _isRunning = false;
    SDL_PollEvent(&_event);
}
