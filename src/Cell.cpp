#include "Cell.h"

Cell::Cell(const Vector2f& position)
{
    this->position = position;

    character = '#';
}

void Cell::Draw(Graphics &graphics)
{
    graphics.SetCharacter(position, character);
}
