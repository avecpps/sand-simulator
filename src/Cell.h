#pragma once

#include "Vector2f.h"
#include "Graphics.h"

class Cell
{
public:
    Cell(const Vector2f& position);

    virtual void Update(float deltaTime) = 0;

    void Draw(Graphics& graphics);

protected:
    Vector2f position;

    char character;
};
