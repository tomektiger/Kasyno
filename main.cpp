#include <iostream>
#include "Classes/PrintInfo.h"
#include "Classes/UserChoice.h"
#include "Classes/NewPlayer.h"
using namespace std;

int main() {
    string player = CreatePlayer();
    PrintWelcome(player);
    PrintAllGames();

    short choosedGame = ChooseGame();

    if (choosedGame == 1) {
        //playFirstGame
    } else if (choosedGame == 2) {
        //playSecondGame
    } else if (choosedGame == 3) {
        //playThirdGame
    }
}