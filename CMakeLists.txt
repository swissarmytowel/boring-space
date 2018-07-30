cmake_minimum_required(VERSION 3.8)
project(boring_space)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

include_directories(include)
link_directories(lib)

set(SOURCE_FILES main.cpp include/utilities.hpp src/utilities.cpp include/Point2D.hpp src/Point2D.cpp include/Entity.hpp src/Entity.cpp include/Player.hpp src/Player.cpp include/Asteroid.hpp src/Asteroid.cpp include/Particle.hpp src/Particle.cpp include/globals.hpp include/Timer.hpp src/Timer.cpp include/Game.hpp src/Game.cpp include/Projectile.hpp src/Projectile.cpp)

add_executable(boring_space ${SOURCE_FILES})

target_link_libraries(boring_space mingw32 SDL2main SDL2 SDL2_image SDL2_ttf)