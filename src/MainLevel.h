#pragma once

#include "Level.h"
#include "Player.h"

class MainLevel : public Level
{
public:
    MainLevel();

    void Update(float deltaTime);

    void Draw(Graphics& graphics);

private:
    Player player;
};
