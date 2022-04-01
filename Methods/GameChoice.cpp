#include <iostream>
#include<limits>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

short ChooseGame() {
    PlaySound("Music/menugier.wav", NULL, SND_FILENAME | SND_ASYNC);
    short choosedGame = 0;
    /*
    Pixel Story by Roa Music | https://soundcloud.com/roa_music1031
    Music promoted by https://www.free-stock-music.com
    Creative Commons Attribution 3.0 Unported License
    https://creativecommons.org/licenses/by/3.0/deed.en_US    
    */

    //PlaySound("Music/action.wav", NULL, SND_FILENAME | SND_ASYNC);
    do {
        cout <<"Which game do you choose? (1-3): ";
        cin >> choosedGame;
        if(choosedGame == 0)
        {
            break;
        }

        if (cin.fail()) {
            cout <<"Please provide a correct number"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (choosedGame > 3 || choosedGame < 1);
    return choosedGame;
}