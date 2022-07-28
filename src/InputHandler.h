#pragma once

#include <curses.h>

class InputHandler
{
public:
    static char GetKey();

    static void Update();

private:
    static char currentKey;
};
