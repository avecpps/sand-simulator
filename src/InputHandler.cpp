#include "InputHandler.h"

char InputHandler::currentKey;

char InputHandler::GetKey()
{
    return currentKey;
}

void InputHandler::Update()
{
    currentKey = getch();
}
