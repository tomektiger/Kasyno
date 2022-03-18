using namespace std;
#include <iostream>
#include"../Classes/PrintInfo.h"
#include<string>
using namespace std;

void PrintDecoration()
{
    cout << "****************************************************"<<endl;
}

void PrintWelcome(string name)
{
    PrintDecoration();
    cout << "Hello "<< name << " welcome to my Casino" << endl;
    double startMoney = 10000;
    cout << "You got a bonus from me: " << startMoney << "$ is all yours :)" << endl;
    PrintDecoration();
}

void PrintAllGames() {
    cout << "Available games:" << endl;
    cout << "1. BlackJack" << endl;
    cout << "2. Ruletka" << endl;
    cout << "3. One hand Banditas" << endl;
}