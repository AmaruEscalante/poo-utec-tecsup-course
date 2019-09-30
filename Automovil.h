//
// Created by amaru on 9/26/19.
//

#ifndef GAME_NEW_AUTOMOVIL_H
#define GAME_NEW_AUTOMOVIL_H
#include <string>

class Automovil {
private:
    int x;
    int y;
    int height;
    int width;
    char color;
    std::string model;
    std::string owner;
    int vx;
    int vy;
    int direction;
public:
    void turn_on();
    void accelerate();
    void stop();
    void brake();
    void direction_f(int valor);
    std::string get_owner();
    std::string get_model();
    int get_velocity();
};


#endif //GAME_NEW_AUTOMOVIL_H
