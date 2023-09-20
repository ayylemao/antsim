#pragma once

#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <random>
#include "utils.hpp"

class Ant
{
    public:
        utils::Vector2f pos;
        double dir;
        bool carrying;
        double MAX_ANGLE;
        double STEP_SIZE;

        Ant(double pos_x, double pos_y);
        
        void move(double dt);
        void randomWalk();

        ~Ant();
};