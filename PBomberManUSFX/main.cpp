#include <string>

#include "SDL.h"

#include "GameManager.h"

int main(int /*argc*/, char** /*argv[]*/)
{
    // init game
    GameManager* game = nullptr;
    game = GameManager::Instance();
    // run game loop
    game->execute();

    return 0;
}
