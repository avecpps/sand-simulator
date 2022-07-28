#include "MainLevel.h"
#include "Vector2f.h"
#include <memory>

MainLevel::MainLevel() 
{
    cells.push_back(std::make_unique<Sand>(Vector2f(0.0f, 0.0f)));
}

void MainLevel::Update(float deltaTime)
{
    for (int i = 0; i < cells.size(); i++)
    {
        cells[i]->Update(deltaTime);
    }
}

void MainLevel::Draw(Graphics &graphics)
{
    for (int i = 0; i < cells.size(); i++)
    {
        cells[i]->Draw(graphics);
    }
}
