#include "ant.h"


Ant::Ant(double pos_x, double pos_y)
{
    pos.x = pos_x;
    pos.y = pos_y;
    carrying = false;
    MAX_ANGLE = M_PI / 12;
    STEP_SIZE = 1;
    srand(static_cast <unsigned> (time(0)));


}

void Ant::move(double dt)
{
    pos.x += STEP_SIZE * std::cos(dir) * dt;
    pos.y += STEP_SIZE * std::sin(dir) * dt;
}

void Ant::randomWalk()
{
    // Generate a random angle to adjust the current direction
    std::random_device rd;

    std::mt19937 e2(rd());
    std::uniform_real_distribution<double> dist(-MAX_ANGLE, MAX_ANGLE);
    double angle = dist(e2);

    dir += angle;
    
    // Ensure direction stays within [0, 2π]
    if (dir < 0.0) {
        dir += 2 * M_PI;
    } else if (dir >= 2 * M_PI) {
        dir -= 2 * M_PI;
    }

    //// Calculate the new position based on the current direction
    //position.x += stepSize * std::cos(direction);
    //position.y += stepSize * std::sin(direction);
}

Ant::~Ant()
{

}