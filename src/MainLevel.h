#pragma once

#include "Cell.h"
#include "Level.h"
#include <vector>

class MainLevel : public Level
{
public:
    MainLevel();

    void Update(float deltaTime);

    void Draw(Graphics &graphics);

private:
    std::vector<Cell> grid;

    float timer;

    int width;
    int height;
};
