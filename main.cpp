#include <iostream>
//#include "game_controller.h"
#include "game_controller.h"

int main() {
    game_model model;
    game_view view(model);
    game_controller controller(model, view);
    controller.launch();

    return 0;
}
