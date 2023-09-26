#include "ant.h"


Ant::Ant(double pos_x, double pos_y)
{
    pos.x = pos_x;
    pos.y = pos_y;
    carrying = false;
    MAX_ANGLE = M_PI / 20;
    STEP_SIZE = 1;
    srand(static_cast <unsigned> (time(0)));
    std::mt19937 e2(rd());


}

void Ant::move(double dt)
{
    pos.x += STEP_SIZE * std::cos(dir) * dt;
    pos.y += STEP_SIZE * std::sin(dir) * dt;
}

void Ant::randomWalk()
{
    std::uniform_real_distribution<double> dist(-MAX_ANGLE, MAX_ANGLE);
    double angle = dist(e2);

    dir += angle;
    
    // Ensure direction stays within [0, 2π]
    if (dir < 0.0) {
        dir += 2 * M_PI;
    } else if (dir >= 2 * M_PI) {
        dir -= 2 * M_PI;
    }

}

Ant::~Ant()
{

}