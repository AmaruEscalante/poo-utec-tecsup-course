#!/bin/bash

{
    cmake --build ./build
    ./build/game_new
} || {
    ./build.sh
    cmake --build ./build
    ./build/game_new
}
