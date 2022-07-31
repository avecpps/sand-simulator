#pragma once

#include "Level.h"
#include <memory>
#include <vector>

class MainLevel : public Level 
{
public:
    MainLevel();

    void Update(float deltaTime);

    void Draw(Graphics &graphics);

private:
};
