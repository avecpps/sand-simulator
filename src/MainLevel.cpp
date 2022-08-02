#include "MainLevel.h"
#include "Vector2f.h"
#include <memory>

MainLevel::MainLevel()
{
    getmaxyx(stdscr, height, width);

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            grid.push_back(Cell(CellState::Empty, width, height, Vector2f(x, y)));
        }
    }

    grid[10].currentState = CellState::Sand;

    timerThreshold = 1000.0f;
}

void MainLevel::Update(float deltaTime)
{
    if (timer >= timerThreshold)
    {
        std::vector<Cell> copyGrid = grid;

        timer -= timerThreshold;

        for (int i = 0; i < grid.size(); i++)
        {
            grid[i].Step(grid, copyGrid);
        }

        grid = copyGrid;
    }

    timer += deltaTime;
}

void MainLevel::Draw(Graphics &graphics)
{
    for (int i = 0; i < grid.size(); i++)
    {
        grid[i].Draw(graphics);
    }
}
