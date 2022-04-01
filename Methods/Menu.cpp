using namespace std;
#include <iostream>
#include<string>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void printGorilla(){
cout<<"                                 "<<endl;
cout<<"               ▄████████▄        "<<endl;
cout<<"             ▄█▀       ▀██▄      "<<endl;
cout<<"           ▄█▀           ██      "<<endl;
cout<<"         ▄█▀      ▄      ▐█▌     "<<endl;
cout<<"        ▄█        ▀█     ▐█▌     "<<endl;
cout<<"       ▄█          ▀█   ▄██      "<<endl;
cout<<"      ▄█            ▀█ ▄█▀█▄     "<<endl;
cout<<"     ▄█              ██▀   █▄    "<<endl;
cout<<"    ▄█                      █▄   "<<endl;
cout<<"   ▄█                        █▄  "<<endl;
cout<<"  ▄█   ▄██████▄    ▄█████▄    █  "<<endl;
cout<<"  █   █▀     ▀█    █▀    ▀█   █  "<<endl;
cout<<"  █   █  ▄    ▀████▀   ▄  █   █  "<<endl;
cout<<"▄███▄ █▄ ▐▀▄         ▄▀▌ ▄█  ███▄"<<endl;
cout<<"█▀  █▄ █ ▐▐▀▀▄▄▄ ▄▄▄▀▀▌▌ █  █  ▀█"<<endl;
cout<<"█    █ █ ▐▐  ▄▄ █ ▄▄  ▌▌ █ █    █"<<endl;
cout<<"█ ▄  █ █ ▐▐▄ ▀▀ █ ▀▀ ▄▌▌ █ █  ▄ █"<<endl;
cout<<"█  █ █ █  ▌▄█▄▄▀ ▀▄▄█▄▐  █ █ █  █"<<endl;
cout<<"█▄ █████████▀  ▀▄▀  ▀█████████ ▄█"<<endl;
cout<<" ██▀  ▄▀  ▀  ▀▄   ▄▀  ▀  ▀▄  ▀██"<<endl;
cout<<"██                             ██"<<endl;
cout<<"█                               █"<<endl;
cout<<"█ ▄                           ▄ █"<<endl;
cout<<"█ ▀█▄                       ▄█▀ █"<<endl;
cout<<"█  █▀███████████████████████▀█  █"<<endl;
cout<<"█  █    █   █   █   █   █    █  █"<<endl;
cout<<"█  ▀█   █   █   █   █   █   █▀  █"<<endl;
cout<<"█   ▀█▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄█▀   █"<<endl;
cout<<"▀█   █  █   █   █   █   █  █   █▀"<<endl;
cout<<" ▀█  ▀█▄█   █   █   █   █▄█▀  █▀ "<<endl;
cout<<"  ▀█   ▀▀█▄▄█   █   █▄▄█▀▀   █▀  "<<endl;
cout<<"   ▀█     ▀▀█████████▀▀     █▀   "<<endl;
cout<<"    ▀█     ▄         ▄     █▀    "<<endl;
cout<<"     ▀██▄   ▀▀▀▀▀▀▀▀▀   ▄██▀     "<<endl;
cout<<"        ▀██▄▄       ▄▄██▀        "<<endl;
cout<<"           ▀▀███████▀▀           "<<endl;


}

void letsPlay(){
    
cout<<"██╗     ███████╗████████╗ ██████╗  ██████╗ ██╗      █████╗ ██╗   ██╗"<<endl;
cout<<"██║     ██╔════╝╚══██╔══╝██╔════╝  ██╔══██╗██║     ██╔══██╗╚██╗ ██╔╝"<<endl;
cout<<"██║     █████╗     ██║   ╚█████╗   ██████╔╝██║     ███████║ ╚████╔╝ "<<endl;
cout<<"██║     ██╔══╝     ██║    ╚═══██╗  ██╔═══╝ ██║     ██╔══██║  ╚██╔╝  "<<endl;
cout<<"███████╗███████╗   ██║   ██████╔╝  ██║     ███████╗██║  ██║   ██║   "<<endl;
cout<<"╚══════╝╚══════╝   ╚═╝   ╚═════╝   ╚═╝     ╚══════╝╚═╝  ╚═╝   ╚═╝   "<<endl;
}

void PrintDecoration()
{
    
cout<<"█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗"<<endl;
cout<<"╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝"<<endl;

}

void PrintWelcome(string name, double startMoney)
{
    PrintDecoration();
    cout << "Hello "<< name << ", welcome to my Casino" << endl;
    cout << "YOU GOT A BONUS FROM ME: " << startMoney << "$ IS ALL YOURS :)" << endl;
    cout<<""<<endl;
    PrintDecoration();
}

void PrintAvailableGames(double &money){
    cout<<"▄▀█ █ █ ▄▀█ █ █   ▄▀█ █▄▄ █   █▀▀   █▀▀ ▄▀█ █▀▄▀█ █▀▀ █▀"<<endl;
    cout<<"█▀█ ▀▄▀ █▀█ █ █▄▄ █▀█ █▄█ █▄▄ ██▄   █▄█ █▀█ █ ▀ █ ██▄ ▄█"<<endl;
    cout<<""<<endl;
    cout<<"Your current balance is: "<<money<<"$"<<endl;
    cout<<" "<<endl;
    cout << "1. BLACKJACK" << endl;
    cout << "2. RULETKA" << endl;
    cout << "3. JEDNOREKI BANDYTA (BE CAREFUL, THIS GAME CAN CAUSE AN EPILEPSY ATTACK)" << endl;
    cout << "0. TO EXIT GAME"<<endl;
}

void PrintLetsPlayAndGorilla() {
    letsPlay();
    cout<<""<<endl;
    cout<<""<<endl;
    printGorilla();
    cout<<""<<endl;
}
