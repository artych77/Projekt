cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp cmake-build-debug/game_controller.cpp cmake-build-debug/game_controller.h cmake-build-debug/game_model.cpp cmake-build-debug/game_model.h)
