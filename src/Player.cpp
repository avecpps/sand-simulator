#include "Player.h"

Player::Player()
{
    speed = 10.0f;
}

void Player::Update(float deltaTime)
{
    if (InputHandler::GetKey() == 'w')
    {
        position.y -= speed * deltaTime;
    }
    
    if (InputHandler::GetKey() == 'd')
    {
        position.x += speed * deltaTime;
    }

    if (InputHandler::GetKey() == 's')
    {
        position.y += speed * deltaTime;
    }

    if (InputHandler::GetKey() == 'a')
    {
        position.x -= speed * deltaTime;
    }
}

void Player::Draw(Graphics &graphics)
{
    graphics.SetCharacter(position, '#');
}
