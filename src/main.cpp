#include <curses.h>
#include <iostream>
#include <ratio>
#include <vector>
#include <chrono>
#include <memory>
#include "Level.h"
#include "MainLevel.h"
#include "InputHandler.h"

int main()
{
    Graphics graphics;
    
    int currentLevel = 0;

    std::vector<std::unique_ptr<Level>> levels;

    levels.push_back(std::make_unique<MainLevel>());

    bool shouldQuit = false;

    float deltaTime;
    
    std::chrono::system_clock::time_point timePoint1 = std::chrono::system_clock::now();
    std::chrono::system_clock::time_point timePoint2 = std::chrono::system_clock::now();

    while (!shouldQuit)
    {
        timePoint1 = timePoint2;
        timePoint2 = std::chrono::system_clock::now();

        deltaTime = std::chrono::duration<float, std::milli>(timePoint2 - timePoint1).count();

        InputHandler::Update();

        levels[currentLevel]->Update(deltaTime);

        if (InputHandler::GetKey() == 'q')
        {
            shouldQuit = true;
        }

        graphics.Clear();

        levels[currentLevel]->Draw(graphics);

        graphics.Draw();
    }
}
