#include "Vector2f.h"
#include "Graphics.h"
#include <vector>

enum class CellState
{
    Empty,
    Sand
};

class Cell
{
public:
    Cell(CellState newCellState, int newWidth, int newHeight, const Vector2f& newPosition);

    void Step(const std::vector<Cell>& inputCells, std::vector<Cell>& outputCells);

    void Draw(Graphics& graphics);

public:
    CellState currentState;

    int width;
    int height;

    Vector2f position;
};
