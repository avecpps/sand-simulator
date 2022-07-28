#include "MainLevel.h"

MainLevel::MainLevel() 
{

}

void MainLevel::Update(float deltaTime)
{
    player.Update(deltaTime);
}

void MainLevel::Draw(Graphics &graphics)
{
    player.Draw(graphics);
}
