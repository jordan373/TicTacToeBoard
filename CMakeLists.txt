cmake_minimum_required(VERSION 3.15)
project(TicTacToeBoard)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TicTacToeBoard
        Makefile
        README.md
        TicTacToeBoard.cpp
        TicTacToeBoard.h
        TicTacToeBoardTest.cpp)
