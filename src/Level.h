#pragma once

#include "Graphics.h"

class Level
{
public:
    virtual void Update(float deltaTime) = 0;

    virtual void Draw(Graphics& graphics) = 0;
};
