#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "utils.hpp"
#include "ant.h"

int main() 
{
    Ant ant = Ant(0.0, 0.0);

    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    sf::CircleShape shape(20.f);
    shape.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        shape.setPosition(sf::Vector2f(ant.pos.x, ant.pos.y));
        ant.randomWalk();
        ant.move(0.1);
        window.draw(shape);
        window.display();
  }
}