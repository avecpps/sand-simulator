#pragma once

#include "Graphics.h"
#include "Vector2f.h"
#include "InputHandler.h"

class Player
{
public:
    Player();

    void Update(float deltaTime);

    void Draw(Graphics& graphics);

private:
    Vector2f position;

    float speed;
};
