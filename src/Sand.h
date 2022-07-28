#pragma once

#include "Cell.h"
#include "Graphics.h"
#include "Vector2f.h"

class Sand : public Cell
{
public:
    Sand(const Vector2f& position);

    void Update(float deltaTime) override;
};
