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
}

void MainLevel::Update(float deltaTime)
{
    if (timer >= 1000.0f)
    {
        std::vector<Cell> copyGrid = grid;

        timer -= 1000.0f;

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
