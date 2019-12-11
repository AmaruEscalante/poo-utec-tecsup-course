//
// Created by amaru on 9/26/19.
//

#ifndef GAME_NEW_AUTOMOVIL_H
#define GAME_NEW_AUTOMOVIL_H
#include <string>

class Automovil{
private:
    int x;
    int y;
    int height;
    int width{};
    char color{};
    std::string model;
    std::string owner;
    std::string plate;
    int vx{};
    int vy{};
    int direction{};
public:
    Automovil(int p_x, int p_y, int p_height ,int p_width,
            char p_color, std::string p_model, std::string p_owner, int p_vx,
            int p_vy, int p_direction): x{p_x}, y{p_y}, height{p_height}, width{p_width_width},
            color(p_color), model(p_model), owner(p_owner), vx(p_vx), vy(p_vy), direction(p_direction);
    void turn_on();
    void accelerate();
    void stop();
    void brake();
    void direction_p(int valor);
    std::string get_owner();
    std::string get_model();
    std::string get_plate();
    int get_velocity();
};


#endif //GAME_NEW_AUTOMOVIL_H
