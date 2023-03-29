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
    std::cout <<"Lvl " << this->model.get_point()/50
    << std::endl;
    animation();

}

int game_view::animation() {
    std::cout << std::endl;
    if(model.get_point() >= 1001 ){
        std::cout << "                |      END     | " << std::endl;
        std::cout << "                |              | " << std::endl;
        std::cout << "                |     - 0 -    | " << std::endl;
        std::cout << "                |       |      | " << std::endl;
        std::cout << "                |     -   -    | " << std::endl;
        std::cout << "                |              | " << std::endl;
        std::cout << "                |              | " << std::endl;
        return 10;
    }
    else std::cout << "                |              | " << std::endl;
    if(model.get_point() % 50 == 0 && model.get_point() != 0) std::cout << "                | Lvl UP! " << model.get_point()/50 <<"    | " << std::endl;
    else std::cout << "                |              | " << std::endl;
    if(model.get_point() % 4 == 0){
        std::cout << "                |     / O /    | " << std::endl;
        std::cout << "                |       |      | " << std::endl;
        std::cout << "                |     /   /    | " << std::endl;
        std::cout << "                |              | " << std::endl;
        std::cout << "                |              | " << std::endl;
    }
    else if(model.get_point() % 4 == 1){
        std::cout << "                |       O /    | " << std::endl;
        std::cout << "                |     / |      | " << std::endl;
        std::cout << "                |     /   /    | " << std::endl;
        std::cout << "                |              | " << std::endl;
        std::cout << "                |              | " << std::endl;
    }
    else if(model.get_point() % 4 == 2){
        std::cout << "                |       O      | " << std::endl;
        std::cout << "                |     / | /    | " << std::endl;
        std::cout << "                |     /   /    | " << std::endl;
        std::cout << "                |              | " << std::endl;
        std::cout << "                |              | " << std::endl;
    }
    else{
        std::cout << "                |     / O      | " << std::endl;
        std::cout << "                |       | /    | " << std::endl;
        std::cout << "                |     /   /    | " << std::endl;
        std::cout << "                |              | " << std::endl;
        std::cout << "                |              | " << std::endl;
    }

}
