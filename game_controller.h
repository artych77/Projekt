//
// Created by Michal on 17.03.2023.
//

#ifndef UNTITLED_GAME_CONTROLLER_H
#define UNTITLED_GAME_CONTROLLER_H

#include <iostream>
#include <conio.h>
#include "game_model.h"
#include "game_view.h"

class game_controller {

public:

    explicit game_controller(game_model& model, game_view& view);
    void launch();

private:
   game_model& model;
   game_view& view;
};


#endif //UNTITLED_GAME_CONTROLLER_H
