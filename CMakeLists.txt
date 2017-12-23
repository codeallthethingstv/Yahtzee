cmake_minimum_required(VERSION 3.9)
project(Yahtzee C)

set(CMAKE_C_STANDARD 99)

add_executable(Yahtzee main.c Player.c Player.h Die.c Die.h)