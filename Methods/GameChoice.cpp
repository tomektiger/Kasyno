#include <iostream>
#include<limits>
using namespace std;

short ChooseGame() {
    short choosedGame = 0;
    do {
        cout <<"Which game do you choose? (1-3): ";
        cin >> choosedGame;
        if (cin.fail()) {
            cout <<"Please provide a correct number"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (choosedGame > 3 || choosedGame < 1);
    return choosedGame;
}