#pragma once

#include <vector>
#include <algorithm>

#include <utilities.hpp>
#include <globals.hpp>

#include <Player.hpp>
#include <Asteroid.hpp>
#include <Particle.hpp>
#include <Projectile.hpp>
#include <Point2D.hpp>
#include <Timer.hpp>

namespace game
{
    class Game
    {
    public:
        Game();
        ~Game() = default;

        void run();

    private:
        void updateEntities();
        void updateParticles();

        void renderEntities();
        void renderParticles();

        void handleInput();

        std::vector<visual::Particle> _particles;
        std::vector<std::unique_ptr<entity::Entity>> _objects;

        entity::Player _player;

        util::ScoreInfo _scoreInfo;

        util::uTexture _sprites;
        util::uWindow _window;
        util::uRenderer _renderer;

        bool _isRunning;

        util::event _event;
        const Uint8 *_events;
    };
}
