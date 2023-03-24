//
// Created by Michal on 24.03.2023.
//

#include "game_view.h"
#include <conio.h>

game_view::game_view(game_model& model) : model(model) {

}

void game_view::update() {
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    std::cout <<"Points: " << this->model.get_point() << std::endl;

}
