#include "Cell.h"

Cell::Cell(CellState newCellState, int newWidth, int newHeight,
           const Vector2f &newPosition)
{
    currentState = newCellState;

    width = newWidth;
    height = newHeight;

    position = newPosition;
}

void Cell::Step(const std::vector<Cell> &inputCells,
                std::vector<Cell> &outputCells)
{
    switch (currentState)
    {
    case CellState::Empty:
        break;

    case CellState::Sand:
        if ((int)position.y < height)
        {
            int underneathPosition = (int)(position.y + 1.0f) * width + (int)position.x;

            if (inputCells[underneathPosition].currentState == CellState::Empty)
            {
                outputCells[(int)position.y * width + (int)position.x].currentState = CellState::Empty;

                outputCells[underneathPosition].currentState = CellState::Sand;
            }
        }
        break;
    }
}

void Cell::Draw(Graphics &graphics)
{
    switch (currentState)
    {
    case CellState::Empty:
        graphics.SetCharacter(position, ' ');
        break;

    case CellState::Sand:
        graphics.SetCharacter(position, '#');
        break;
    }
}
