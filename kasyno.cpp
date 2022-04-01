#include <iostream>
#include "Methods/Menu.cpp"
#include "Methods/GameChoice.cpp"
#include "Methods/PlayerCreation.cpp"
#include "Methods/TextPictures.cpp"
#include "Methods/AdditionalMethods.cpp"
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;


double PlayJednorekiBandyta(double &money){
    PlaySound("Music/jednoreki.wav", NULL, SND_FILENAME | SND_ASYNC);
    system("cls");

    double userBet;
    bool isWin = false;
    string answer;
    srand(time(0));
    int randomNumber1 = rand()%4+1;//1-4
    int randomNumber2 = rand()%4+1;//1-4
    int randomNumber3 = rand()%4+1;//1-4

    printTextBandyta();
    cout<<""<<endl;

    do{
        PrintLines();
        do{
            cout<<"How much do you want to bet ?: ";
            cin>> userBet;

            if(userBet>money)
            {
                system("cls");
                cout<<"You dont have that much money ;/"<<endl;
            }
        }while(userBet>money);
        if(money>0)
        {
            system("cls");
            printMoney();
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<"PRESS ENTER TO PULL THE TRIGGER ! :) ";
            getch();

            MachineRolling();
                
            if(randomNumber1==randomNumber2&&randomNumber2==randomNumber3)
            {
                isWin = true;
                system("cls");
                PrintWonText();
                cout<<" "<<endl;
                cout<<"Machine rolled: "<<randomNumber1<<", "<<randomNumber2<<", "<<randomNumber3<<endl;
                cout<<"You won !!! :D"<<endl;
                cout<<userBet<<"$ HAS BEEN ADDED TO YOUR ACCOUNT BALANCE"<<endl;
                cout<<""<<endl;
                money += userBet;
                PrintWinImage();
                cout<<""<<endl;
                PrintLines();
            }
            else
            {
                PlaySound("Music/funny.wav", NULL, SND_FILENAME | SND_ASYNC);
                isWin = false;
                money -= userBet;
                system("cls");
                PrintLostText();
                cout<<" "<<endl;
                cout<<"You have lost "<<userBet<<"$ :("<<endl;
                cout<<"Machine rolled: "<<randomNumber1<<", "<<randomNumber2<<", "<<randomNumber3<<endl;
                cout<<""<<endl;
                PrintLostImage();
                cout<<""<<endl;
                PrintLines();
            }
            cout<<"Your balance is "<<money<<"$"<<endl;
            if(money>0)
            {
                cout<<"Do you want to play again ? t/n: ";
                cin >> answer;
                if(answer=="t")
                {
                    PlaySound(NULL, NULL, SND_ASYNC);
                    PlaySound("Music/jednoreki.wav", NULL, SND_FILENAME | SND_ASYNC);
                    system("cls");
                    PrintTakeMyMoney();
                    Sleep(3000);
                    randomNumber1 = rand()%4+1;//1-4
                    randomNumber2 = rand()%4+1;//1-4
                    randomNumber3 = rand()%4+1;//1-4
                    system("cls");
                }
                else
                {
                    system("cls");
                    PrintAvailableGames(money);
                    short choosedGame = ChooseGame();
                    if (choosedGame == 1) {
                    }else if (choosedGame == 2) {
                        // money = playRuletka(money);
                    } else if (choosedGame == 3) {
                        money = PlayJednorekiBandyta(money);
                    }
                }
            }else
            {
                cout<<"SORRY BUT YOU HAVE NO FUNDS TO PLAY :("<<endl;
                cout<<" "<<endl;
                PrintScream();
            }   
        }
    }while(answer !="n" && money>0);
  return money;
}

double playRuletka(double &money)
{
    PlaySound("Music/roulette.wav", NULL, SND_FILENAME | SND_ASYNC);
     //random number from 1 to 4, simulation of rotating
    system("cls");
    srand(time(0));
    int successNumber = rand()%36;
    int choosedNumber;
    double hajs;
    bool isWon = false;
    string answer;

    if (money>0){
        do
        {
            printRuletkaText();
            do
            {
                PrintLines();
                cout<<"Please choose a number to place your bet on (0-36): ";
                cin>>choosedNumber;
                if (choosedNumber>36||choosedNumber<0){
                    system("cls");
                    cout<<"Please choose the number between 0-36"<<endl;
                }

            }while(choosedNumber>36 || choosedNumber<0);
            do{
                cout<<"How much money do you want to bet ?: ";
                cin>>hajs;
                if(hajs>money)
                {
                    system("cls");
                    cout<<"You dont have that much money ;/"<<endl;
                }
            }while(hajs>money);
            PrintLines();
            system("cls");
            PrintLines();
            cout<<"PRESS ENTER TO ROLL....."<<endl;
            getch();
            BallRolling();
            
            if(choosedNumber == successNumber)
            {

                isWon = true;
                system("cls");
                PrintWonText();
                cout<<" "<<endl;
                cout<<"Your number: "<<choosedNumber<<endl;
                cout<<"The ball landed on the number: "<<successNumber<<endl;
                cout<<"You won !!! :D"<<endl;
                cout<<hajs<<"$ HAS BEEN ADDED TO YOUR ACCOUNT BALANCE"<<endl;
                cout<<""<<endl;
                money += hajs;
                PrintWinImage();
                cout<<""<<endl;
                PrintLines();
            }
            else
            {
                /*
                Cheerful Whistling by Free Music | https://soundcloud.com/fm_freemusic
                Music promoted by https://www.free-stock-music.com
                Creative Commons Attribution 3.0 Unported License
                https://creativecommons.org/licenses/by/3.0/deed.en_US
                */
                PlaySound("Music/funny.wav", NULL, SND_FILENAME | SND_ASYNC);
                isWon = false;
                money -= hajs;
                system("cls");
                PrintLostText();
                cout<<" "<<endl;
                cout<<"Your number: "<<choosedNumber<<endl;
                cout<<"The ball landed on the number: "<<successNumber<<endl;
                cout<<"You have lost "<<hajs<<"$ :("<<endl;
                cout<<""<<endl;
                PrintLostImage();
                cout<<""<<endl;
                PrintLines();
            }

            cout<<"Your balance is "<<money<<"$"<<endl;
            if(money>0)
            {
                cout<<"Do you want to play again ? t/n: ";
                cin >> answer;
                if(answer=="t")
                {
                    PlaySound(NULL, NULL, SND_ASYNC);
                    PlaySound("Music/roulette.wav", NULL, SND_FILENAME | SND_ASYNC);
                    system("cls");
                    PrintTakeMyMoney();
                    Sleep(3000);
                    successNumber = rand()%36;
                    system("cls");
                }
                else
                {
                    system("cls");
                    PrintAvailableGames(money);
                    short choosedGame = ChooseGame();
                    if (choosedGame == 1) {
                    } else if (choosedGame == 2) {
                        money = playRuletka(money);
                    } else if (choosedGame == 3) {
                        money = PlayJednorekiBandyta(money);
                    }
                }
            }
            else
            {
                cout<<"SORRY BUT YOU HAVE NO FUNDS TO PLAY :("<<endl;
                cout<<" "<<endl;
                PrintScream();
            }

        }while(answer !="n" && money>0);
    }
    else if(money == 0)
    {
        system("cls");
        cout<<"YOU HAVE LOST ALL YOUR MONEY :("<<endl;
        cout<<" "<<endl;
        PrintScream();
    }
    return money;
}

int main() {
    PlaySound("Music/action.wav", NULL, SND_FILENAME | SND_ASYNC);
    double money = 10000;

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
    PrintWelcome(player,money);

    cout<<"PRESS ENTER TO SHOW GAMES......"<<endl;
    getch();
    system("cls");
    PrintAvailableGames(money);

    short choosedGame = ChooseGame();

    if (choosedGame == 1) {
    } else if (choosedGame == 2) {
        money = playRuletka(money);
    } else if (choosedGame == 3) {
        money = PlayJednorekiBandyta(money);
    }
}
