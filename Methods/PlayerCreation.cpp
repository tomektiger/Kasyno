#include <iostream>
#include <sstream>
#include <limits>
using namespace std;

void PrintFunny(){
    cout<<"░░░░░░▄▄▄▄▀▀▀▀▀▀▀▀▄▄▄▄▄▄▄"<<endl;
    cout<<"░░░░░█░░░░░░░░░░░░░░░░░░▀▀▄"<<endl;
    cout<<"░░░░█░░░░░░░░░░░░░░░░░░░░░░█"<<endl;
    cout<<"░░░█░░░░░░▄██▀▄▄░░░░░▄▄▄░░░░█"<<endl;
    cout<<"░▄▀░▄▄▄░░█▀▀▀▀▄▄█░░░██▄▄█░░░░█"<<endl;
    cout<<"█░░█░▄░▀▄▄▄▀░░░░░░░░█░░░░░░░░░█"<<endl;
    cout<<"█░░█░█▀▄▄░░░░░█▀░░░░▀▄░░▄▀▀▀▄░█"<<endl;
    cout<<"░█░▀▄░█▄░█▀▄▄░▀░▀▀░▄▄▀░░░░█░░█"<<endl;
    cout<<"░░█░░░▀▄▀█▄▄░█▀▀▀▄▄▄▄▀▀█▀██░█"<<endl;
    cout<<"░░░█░░░░██░░▀█▄▄▄█▄▄█▄▄██▄░░█"<<endl;
    cout<<"░░░░█░░░░▀▀▄░█░░░█░█▀█▀█▀██░█"<<endl;
    cout<<"░░░░░▀▄░░░░░▀▀▄▄▄█▄█▄█▄█▄▀░░█"<<endl;
    cout<<"░░░░░░░▀▄▄░░░░░░░░░░░░░░░░░░░█"<<endl;
    cout<<"░░▐▌░█░░░░▀▀▄▄░░░░░░░░░░░░░░░█"<<endl;
    cout<<"░░░█▐▌░░░░░░█░▀▄▄▄▄▄░░░░░░░░█"<<endl;
    cout<<"░░███░░░░░▄▄█░▄▄░██▄▄▄▄▄▄▄▄▀"<<endl;
    cout<<"░▐████░░▄▀█▀█▄▄▄▄▄█▀▄▀▄"<<endl;
    cout<<"░░█░░▌░█░░░▀▄░█▀█░▄▀░░░█"<<endl;
    cout<<"░░█░░▌░█░░█░░█░░░█░░█░░█"<<endl;
    cout<<"░░█░░▀▀░░██░░█░░░█░░█░░█"<<endl;
    cout<<"░░░▀▀▄▄▀▀░█░░░▀▄▀▀▀▀█░░█"<<endl;
    cout<<"░░░░░░░░░░█░░░░▄░░▄██▄▄▀"<<endl;
    cout<<"░░░░░░░░░░█░░░░▄░░████"<<endl;
    cout<<"░░░░░░░░░░█▄░░▄▄▄░░▄█"<<endl;
    cout<<"░░░░░░░░░░░█▀▀░▄░▀▀█"<<endl;
    cout<<"░░░░░░░░░░░█░░░█░░░█"<<endl;
    cout<<"░░░░░░░░░░░█░░░▐░░░█"<<endl;
    cout<<"░░░░░░░░░░░█░░░▐░░░█"<<endl;
    cout<<"░░░░░░░░░░░█░░░▐░░░█"<<endl;
    cout<<"░░░░░░░░░░░█░░░▐░░░█"<<endl;
    cout<<"░░░░░░░░░░░█░░░▐░░░█"<<endl;
    cout<<"░░░░░░░░░░░█▄▄▄▐▄▄▄█"<<endl;
    cout<<"░░░░░░░▄▄▄▄▀▄▄▀█▀▄▄▀▄▄▄▄"<<endl;
    cout<<"░░░░░▄▀▄░▄░▄░░░█░░░▄░▄░▄▀▄"<<endl;
    cout<<"░░░░░█▄▄▄▄▄▄▄▄▄▀▄▄▄▄▄▄▄▄▄█"<<endl;

}

void Decoration()
{
    
cout<<"█████╗█████╗█████╗█████╗█████╗█████╗"<<endl;
cout<<"╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝"<<endl;

}

string CreatePlayer() {
    string name;
    int age;
    int n;
    stringstream ss;
    do {
        Decoration();
        cout << "What is your name ?: ";
        cin >> name;
        ss << name;
        ss >> n;
        if (!ss.fail()) {
            cout << "Please provide a correct name" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!ss.fail());

    do {
        cout << "How old are you ?: ";
        cin >> age;
        if (age < 18)
        {
            PrintFunny();
            cout<<""<<endl;
            cout << "Sorry but only adults can play my game :(" << endl;
            exit(0);
        }
        else if (cin.fail())
        {
            cout << "Please provide a correct age" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            cout << "Welcome and have fun :)" << endl;
        }
    } while (cin.fail());

    return name;
}
