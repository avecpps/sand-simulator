#!/bin/sh
g++ -c src/*.cpp
g++ *.o -o sand-simulator -lncurses
