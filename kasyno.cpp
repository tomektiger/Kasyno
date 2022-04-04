#include <iostream>
#include "Methods/Menu.cpp"
#include "Methods/PlayerCreation.cpp"
#include "Methods/TextPictures.cpp"
#include "Games/Bandyta/BandytaMethods.cpp"
#include "Games/Roulette/RouletteMethods.cpp"
#include "Games/Blackjack/BlackjackMethods.cpp"
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
                    break;
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
                    break;
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

double playBlackjack(double &money)
{
    PlaySound("Music/blackjack.wav", NULL, SND_FILENAME | SND_ASYNC);
    PrintBlackjackText();   
    srand((unsigned)time(0));
    int dealer_card1 = rand() % 13 + 1; 
	int dealer_card2 = rand() % 13 + 1;
	int player_card1 = rand() % 13 + 1;
	int player_card2 = rand() % 13 + 1;
    string answer;
    int bet;

    if(money>0)
    {
        do
        {
            do
            {
                PrintLines();
                cout << "\n" << "Please place your bet: ";
                cin >> bet;
                if(bet >money)
                {
                    cout<<"Bet cannot be higher than your balance !"<<endl;
                }
            }while(bet>money);

            system("cls");

            PrintDistributingCards();
            PrintLines();
            cout<<"PRESS ENTER TO DISTRIBUTE CARDS.........."<<endl;
            getch();

            PrintTasowanieKart();

            PrintResultsText();
            breakLine();

            cout << "Dealer has: "; 
            switch (dealer_card1) {
                case 1: cout << "Ace and "; 
                    break;
                case 11: cout << "Jack and "; 
                    break;
                case 12: cout << "Queen and ";
                    break;
                case 13: cout << "King and "; 
                    break;
                default: cout << dealer_card1 << " and ";
                    break;
            }
            switch (dealer_card2) 
            {
                case 1: cout << "Ace"; 
                    break;
                case 11: cout << "Jack"; 
                    break;
                case 12: cout << "Queen"; 
                    break;
                case 13: cout << "King"; 
                    break;
                default: cout << dealer_card2;
                    break;
            }

            cout << "\n"<< "You have: ";
            switch (player_card1){
                case 1: cout << "Ace and "; 
                break;
                case 11: cout << "Jack and "; 
                    break;
                case 12: cout << "Queen and "; 
                    break;
                case 13: cout << "King and "; 
                    break;
                default: cout << player_card1 << " and "; 
                    break;
            }
            switch (player_card2)
            {
                case 1: cout << "Ace"; 
                    break;
                case 11: cout << "Jack"; 
                    break;
                case 12: cout << "Queen"; 
                    break;
                case 13: cout << "King"; 
                    break;
                default: cout << player_card2;
                    break;
            }

            int dealer_total = dealer_card1 + dealer_card2;
            int player_total = player_card1 + player_card2;

            if ((player_card1 == 1) && (player_card2 >= 10 && player_card2 <= 13))
            {
                cout << "Blackjack! You Won $ " << bet*1.5 << "!!" << endl;
                breakLine();
                PrintDashes();
                breakLine();
                PrintWinImage();
                breakLine();
                money+=bet; 
            }else 
            {
                if ((player_card2 == 1) && (player_card1 >= 10 && player_card1 <= 13))
                {
                    cout << "Blackjack! You Won $ " << bet*1.5 << "!!" << endl;
                    breakLine();
                    PrintDashes();
                    breakLine();
                    PrintWinImage();
                    breakLine();
                    money+=bet;
                }
                else
                { 
                    if (player_total > dealer_total)
                    {
                        cout << "\n" << "You Won $" << bet << "!!" << endl;
                        breakLine();
                        PrintDashes();
                        breakLine();
                        PrintWinImage();
                        breakLine();
                        money+=bet;
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
                        cout << "\n" << "You lost $" << bet<< endl;
                        breakLine();
                        PrintDashes();
                        breakLine();
                        PrintLostImage();
                        breakLine();
                        money-=bet;	
                    }
                }
            }
            breakLine();
            breakLine();
            PrintLines();
            breakLine();
            cout<<"Your balance is "<<money<<"$"<<endl;
            if (money>0)
            {
                cout<<"Do you want to play again ? t/n: ";
                cin >> answer;
                if(answer=="t")
                {
                    PlaySound(NULL, NULL, SND_ASYNC);
                    PlaySound("Music/blackjack.wav", NULL, SND_FILENAME | SND_ASYNC);
                    system("cls");
                    PrintTakeMyMoney();
                    Sleep(3000);
                    dealer_card1 = rand() % 13 + 1; 
	                dealer_card2 = rand() % 13 + 1;
	                player_card1 = rand() % 13 + 1;
	                player_card2 = rand() % 13 + 1;
                    system("cls");
                }
                else
                {
                    system("cls");
                    break;    
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
    else
    {
        cout<<"SORRY BUT YOU HAVE NO FUNDS TO PLAY :("<<endl;
        cout<<" "<<endl;
        PrintScream();
    }
return money;
}

void GameChoice(double money){
    short choosedGame = 0;
    /*
    Pixel Story by Roa Music | https://soundcloud.com/roa_music1031
    Music promoted by https://www.free-stock-music.com
    Creative Commons Attribution 3.0 Unported License
    https://creativecommons.org/licenses/by/3.0/deed.en_US    
    */

    //PlaySound("Music/action.wav", NULL, SND_FILENAME | SND_ASYNC);
    do{
        do 
        {
            PrintAvailableGames(money);
            cout <<"Which game do you choose? (1-3): ";
            cin >> choosedGame;
            if(choosedGame == 0)
            {
                break;
            }

            if (cin.fail()) 
            {
                cout <<"Please provide a correct number"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }while (choosedGame > 3 || choosedGame < 1);
            
        if (choosedGame == 1) 
        {
            money = playBlackjack(money);
        } 
        else if (choosedGame == 2) 
        {
            money = playRuletka(money);
        } 
        else if (choosedGame == 3) 
        {
            money = PlayJednorekiBandyta(money);
        }
    }while(choosedGame!=0);
}

int main() {
    system("cls");
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
    GameChoice(money);
}

