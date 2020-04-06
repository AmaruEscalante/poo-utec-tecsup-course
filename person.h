//
// Created by amaru on 4/5/20.
//

#ifndef GAME_NEW_PERSON_H
#define GAME_NEW_PERSON_H
#include <string>


class person {
private:
    std::string id;
    std::string name;
    bool is_natural;

public:
    person(std::string p_id, std::string p_name, bool p_is_natural):
    id{p_id}, name{p_name},is_natural{p_is_natural}{}

    std::string get_id();
    std::string get_name();
    bool get_is_natural();
};


#endif //GAME_NEW_PERSON_H
