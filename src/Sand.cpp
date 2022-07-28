#include "Sand.h"
#include "Vector2f.h"

Sand::Sand(const Vector2f& position)
    :
        Cell(position)
{
}

void Sand::Update(float deltaTime)
{
    position.y += 0.004f * deltaTime;
}
