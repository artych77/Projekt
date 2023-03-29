//
// Created by Michal on 24.03.2023.
//

#ifndef UNTITLED_GAME_VIEW_H
#define UNTITLED_GAME_VIEW_H

#include <iostream>
#include "game_model.h"



class game_view {

public:
    explicit game_view(game_model& model);

    void update();
    int animation();

private:
    game_model& model;
};


#endif //UNTITLED_GAME_VIEW_H
