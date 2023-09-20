#include <iostream>
#include "utils.hpp"
#include "ant.h"

int main() 
{
    Ant ant = Ant(0.0, 0.0);
    for (int i = 0; i<100; i++)
    {
        ant.randomWalk();
        ant.move(0.1);
        std::cout << ant.pos.x << " " << ant.pos.y << "\n";
    }
}