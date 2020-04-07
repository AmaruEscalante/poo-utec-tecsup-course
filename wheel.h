//
// Created by amaru on 4/6/20.
//

#ifndef GAME_NEW_WHEEL_H
#define GAME_NEW_WHEEL_H


class wheel {
private:
    int width;
    int radius;
public:
    wheel(int p_width, int p_radius):
    width(p_width), radius(p_radius){}
    int get_width();
    int get_radius();
};


#endif //GAME_NEW_WHEEL_H
