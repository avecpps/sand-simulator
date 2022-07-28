#pragma once

#include <memory>
#include <vector>
#include "Cell.h"
#include "Level.h"
#include "Sand.h"

class MainLevel : public Level
{
public:
    MainLevel();

    void Update(float deltaTime);

    void Draw(Graphics& graphics);

private:
    std::vector<std::unique_ptr<Cell>> cells;
};
