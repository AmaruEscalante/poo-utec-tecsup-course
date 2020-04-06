#include <iostream>
#include <SFML/Graphics.hpp>
#include "Automovil.h"

/*
int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200),  "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
// Addedd a comennt, this is only for test purposes only
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}*/

int main(){
    Automovil toyota {0, 0, 6, 3, 'B',
                      "yaris", "Jose ramos",
                      "ABB201", 12, 0, 1};

    std::cout << toyota.get_model() << std::endl;
    std::cout << toyota.get_owner() << std::endl;
    std::cout << toyota.get_plate() << std::endl;
    std::cout << toyota.get_velocity_x() << std::endl;
    std::cout << toyota.get_velocity_y() << std::endl;
    return 0;
}
