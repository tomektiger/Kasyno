#include <iostream>
#include "Methods/Menu.cpp"
#include "Methods/GameChoice.cpp"
#include "Methods/PlayerCreation.cpp"
#include "Methods/TextPictures.cpp"
#include "Methods/AdditionalMethods.cpp"

using namespace std;

int main() {
    breakLine();
    CasinoPicture();
    breakLine();

    PrintDollar();
    breakLine();

    WelcomePicture();
    breakLine();
    pause();
    system("cls");

    string player = CreatePlayer();
    system("cls");

    PrintLetsPlayAndGorilla();
    breakLine();
    PrintWelcome(player);
    PrintAvailableGames();

    short choosedGame = ChooseGame();

    if (choosedGame == 1) {
        //playFirstGame
    } else if (choosedGame == 2) {
        //playSecondGame
    } else if (choosedGame == 3) {
        //playThirdGame
    }
}