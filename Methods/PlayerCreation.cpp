#include <iostream>
#include <sstream>
#include <limits>
#include <ctype.h>
using namespace std;

void PrintFunny()
{
    cout << "░░░░░░▄▄▄▄▀▀▀▀▀▀▀▀▄▄▄▄▄▄▄" << endl;
    cout << "░░░░░█░░░░░░░░░░░░░░░░░░▀▀▄" << endl;
    cout << "░░░░█░░░░░░░░░░░░░░░░░░░░░░█" << endl;
    cout << "░░░█░░░░░░▄██▀▄▄░░░░░▄▄▄░░░░█" << endl;
    cout << "░▄▀░▄▄▄░░█▀▀▀▀▄▄█░░░██▄▄█░░░░█" << endl;
    cout << "█░░█░▄░▀▄▄▄▀░░░░░░░░█░░░░░░░░░█" << endl;
    cout << "█░░█░█▀▄▄░░░░░█▀░░░░▀▄░░▄▀▀▀▄░█" << endl;
    cout << "░█░▀▄░█▄░█▀▄▄░▀░▀▀░▄▄▀░░░░█░░█" << endl;
    cout << "░░█░░░▀▄▀█▄▄░█▀▀▀▄▄▄▄▀▀█▀██░█" << endl;
    cout << "░░░█░░░░██░░▀█▄▄▄█▄▄█▄▄██▄░░█" << endl;
    cout << "░░░░█░░░░▀▀▄░█░░░█░█▀█▀█▀██░█" << endl;
    cout << "░░░░░▀▄░░░░░▀▀▄▄▄█▄█▄█▄█▄▀░░█" << endl;
    cout << "░░░░░░░▀▄▄░░░░░░░░░░░░░░░░░░░█" << endl;
    cout << "░░▐▌░█░░░░▀▀▄▄░░░░░░░░░░░░░░░█" << endl;
    cout << "░░░█▐▌░░░░░░█░▀▄▄▄▄▄░░░░░░░░█" << endl;
    cout << "░░███░░░░░▄▄█░▄▄░██▄▄▄▄▄▄▄▄▀" << endl;
    cout << "░▐████░░▄▀█▀█▄▄▄▄▄█▀▄▀▄" << endl;
    cout << "░░█░░▌░█░░░▀▄░█▀█░▄▀░░░█" << endl;
    cout << "░░█░░▌░█░░█░░█░░░█░░█░░█" << endl;
    cout << "░░█░░▀▀░░██░░█░░░█░░█░░█" << endl;
    cout << "░░░▀▀▄▄▀▀░█░░░▀▄▀▀▀▀█░░█" << endl;
    cout << "░░░░░░░░░░█░░░░▄░░▄██▄▄▀" << endl;
    cout << "░░░░░░░░░░█░░░░▄░░████" << endl;
    cout << "░░░░░░░░░░█▄░░▄▄▄░░▄█" << endl;
    cout << "░░░░░░░░░░░█▀▀░▄░▀▀█" << endl;
    cout << "░░░░░░░░░░░█░░░█░░░█" << endl;
    cout << "░░░░░░░░░░░█░░░▐░░░█" << endl;
    cout << "░░░░░░░░░░░█░░░▐░░░█" << endl;
    cout << "░░░░░░░░░░░█░░░▐░░░█" << endl;
    cout << "░░░░░░░░░░░█░░░▐░░░█" << endl;
    cout << "░░░░░░░░░░░█░░░▐░░░█" << endl;
    cout << "░░░░░░░░░░░█▄▄▄▐▄▄▄█" << endl;
    cout << "░░░░░░░▄▄▄▄▀▄▄▀█▀▄▄▀▄▄▄▄" << endl;
    cout << "░░░░░▄▀▄░▄░▄░░░█░░░▄░▄░▄▀▄" << endl;
    cout << "░░░░░█▄▄▄▄▄▄▄▄▄▀▄▄▄▄▄▄▄▄▄█" << endl;
}

void Decoration()
{

    cout << "█████╗█████╗█████╗█████╗█████╗█████╗" << endl;
    cout << "╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝" << endl;
}

string CreatePlayer()
{
    int age;
    string name;
    Decoration();
    while (true)
    {
        cout << "What is your name ?: ";
        cin >> name;
        if (!((name.find_first_not_of("-1-2-3-4-5-6-7-8-90123456789./,%&$!@#$%^&*()_-+?") == string::npos) == true))
        {
            break;
        }
        else
        {
            cout << "ERROR: Please provide correct name !" << endl;
        }
    }

    do
    {
        cout << "How old are you ?: ";
        cin >> age;
        while (cin.fail())
        {
            cout << "Please provide a correct age" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "How old are you ?: ";
            cin >> age;
        }
        if (age < 0)
        {
            cout << "Please provide correct age" << endl;
        }
        else if (age < 18 && age > 0)
        {
            PrintFunny();
            cout << "" << endl;
            cout << "Sorry but only adults can play my game :(" << endl;
            exit(0);
        }
        else
        {
            cout << "Welcome and have fun :)" << endl;
        }
    } while (cin.fail());

    return name;
}
