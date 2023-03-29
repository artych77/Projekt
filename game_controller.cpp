//
// Created by Michal on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view) {

}



void game_controller::launch() {
    this->view.update();
    int key;
    do {
        key = _getch();
        if(key == 13){
            this->model.add_points(1);
            this->view.update();
        }
        if(this->model.get_point() >= 1001) break;
    }
    while(key != 27);


}



