cmake_minimum_required(VERSION 3.21)
project(KASYNO)

set(CMAKE_CXX_STANDARD 20)

add_executable(KASYNO main.cpp Methods/Games.cpp Methods/PrintInfo.cpp Classes/PrintInfo.h Methods/NewPlayer.cpp Classes/NewPlayer.h Methods/UserChoice.cpp Classes/UserChoice.h)
