// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <conio.h>
// using namespace std;

// void PrintLines()
// {
    
// cout<<"█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗"<<endl;
// cout<<"╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝"<<endl;

// }

// void PrintLostImage()
// {

// cout<<"──────────────────────────────────"<<endl;
// cout<<"───────▄██████████████████▄───────"<<endl;
// cout<<"────▄███████████████████████▄─────"<<endl;
// cout<<"───███████████████████████████────"<<endl;
// cout<<"──█████████████████████████████───"<<endl;
// cout<<"─████████████▀─────────▀████████──"<<endl;
// cout<<"██████████▀───────────────▀██████─"<<endl;
// cout<<"███████▀────────────────────█████▌"<<endl;
// cout<<"██████───▄▀▀▀▀▄──────▄▀▀▀▀▄──█████"<<endl;
// cout<<"█████▀──────────────────▄▄▄───████"<<endl;
// cout<<"████────▄█████▄───────▄█▀▀▀█▄──██▀"<<endl;
// cout<<"████──▄█▀────▀██─────█▀────────█▀─"<<endl;
// cout<<"─▀██───────────▀────────▄███▄──██─"<<endl;
// cout<<"──██───▄▄██▀█▄──▀▄▄▄▀─▄██▄▀────███"<<endl;
// cout<<"▄███────▀▀▀▀▀──────────────▄▄──██▐"<<endl;
// cout<<"█▄▀█──▀▀▀▄▄▄▀▀───────▀▀▄▄▄▀────█▌▐"<<endl;
// cout<<"█▐─█────────────▄───▄──────────█▌▐"<<endl;
// cout<<"█▐─▀───────▐──▄▀─────▀▄──▌─────██▐"<<endl;
// cout<<"█─▀────────▌──▀▄─────▄▀──▐─────██▀"<<endl;
// cout<<"▀█─█──────▐─────▀▀▄▀▀─────▌────█──"<<endl;
// cout<<"─▀█▀───────▄────────────▄──────█──"<<endl;
// cout<<"───█─────▄▀──▄█████████▄─▀▄───▄█──"<<endl;
// cout<<"───█────█──▄██▀░░░░░░░▀██▄─█──█───"<<endl;
// cout<<"───█▄───▀▄──▀██▄█████▄██▀─▄▀─▄█───"<<endl;
// cout<<"────█▄────▀───▀▀▀▀──▀▀▀──▀──▄█────"<<endl;
// cout<<"─────█▄────────▄▀▀▀▀▀▄─────▄█─────"<<endl;
// cout<<"──────███▄──────────────▄▄██──────"<<endl;
// cout<<"─────▄█─▀█████▄▄────▄▄████▀█▄─────"<<endl;
// cout<<"────▄█───────▀▀██████▀▀─────█▄────"<<endl;
// cout<<"───▄█─────▄▀───────────▀▄────█▄───"<<endl;
// cout<<"──▄█─────▀───────────────▀────█▄──"<<endl;
// cout<<"──────────────────────────────────"<<endl;
// cout<<"▐▌▐█▄█▌▐▀▀█▐▀▀▌─█▀─█▀─▐▌▐▀█▐▀█─█─█"<<endl;
// cout<<"▐▌▐─▀─▌▐▀▀▀▐──▌─▀█─▀█─▐▌▐▀▄▐▀▄─█─█"<<endl;
// cout<<"▐▌▐───▌▐───▐▄▄▌─▄█─▄█─▐▌▐▄█▐─█─█▄█"<<endl;



// }

// void PrintWinImage()
// {
// cout<<"░░█▀░░░░░░░░░░░▀▀███████░░░░"<<endl;
// cout<<"░░█▌░░░░░░░░░░░░░░░▀██████░░░"<<endl;
// cout<<"░█▌░░░░░░░░░░░░░░░░███████▌░░"<<endl;
// cout<<"░█░░░░░░░░░░░░░░░░░████████░░"<<endl;
// cout<<"▐▌░░░░░░░░░░░░░░░░░▀██████▌░░"<<endl;
// cout<<"░▌▄███▌░░░░▀████▄░░░░▀████▌░░"<<endl;
// cout<<"▐▀▀▄█▄░▌░░░▄██▄▄▄▀░░░░████▄▄░"<<endl;
// cout<<"▐░▀░░═▐░░░░░░══░░▀░░░░▐▀░▄▀▌▌"<<endl;
// cout<<"▐░░░░░▌░░░░░░░░░░░░░░░▀░▀░░▌▌"<<endl;
// cout<<"▐░░░▄▀░░░▀░▌░░░░░░░░░░░░▌█░▌▌"<<endl;
// cout<<"░▌░░▀▀▄▄▀▀▄▌▌░░░░░░░░░░▐░▀▐▐░"<<endl;
// cout<<"░▌░░▌░▄▄▄▄░░░▌░░░░░░░░▐░░▀▐░░"<<endl;
// cout<<"░█░▐▄██████▄░▐░░░░░░░░█▀▄▄▀░░"<<endl;
// cout<<"░▐░▌▌░░░░░░▀▀▄▐░░░░░░█▌░░░░░░"<<endl;
// cout<<"░░█░░▄▀▀▀▀▄░▄═╝▄░░░▄▀░▌░░░░░░"<<endl;
// cout<<"░░░▌▐░░░░░░▌░▀▀░░▄▀░░▐░░░░░░░"<<endl;
// cout<<"░░░▀▄░░░░░░░░░▄▀▀░░░░█░░░░░░░"<<endl;
// cout<<"░░░▄█▄▄▄▄▄▄▄▀▀░░░░░░░▌▌░░░░░░"<<endl;
// cout<<"░░▄▀▌▀▌░░░░░░░░░░░░░▄▀▀▄░░░░░"<<endl;
// cout<<"▄▀░░▌░▀▄░░░░░░░░░░▄▀░░▌░▀▄░░░"<<endl;
// cout<<"░░░░▌█▄▄▀▄░░░░░░▄▀░░░░▌░░░▌▄▄"<<endl;
// cout<<"░░░▄▐██████▄▄░▄▀░░▄▄▄▄▌░░░░▄░"<<endl;
// cout<<"░░▄▌████████▄▄▄███████▌░░░░░▄"<<endl;
// cout<<"░▄▀░██████████████████▌▀▄░░░░"<<endl;
// cout<<"▀░░░█████▀▀░░░▀███████░░░▀▄░░"<<endl;
// cout<<"░░░░▐█▀░░░▐░░░░░▀████▌░░░░▀▄░"<<endl;
// cout<<"░░░░░░▌░░░▐░░░░▐░░▀▀█░░░░░░░▀"<<endl;
// cout<<"░░░░░░▐░░░░▌░░░▐░░░░░▌░░░░░░░"<<endl;
// cout<<"░╔╗║░╔═╗░═╦═░░░░░╔╗░░╔═╗░╦═╗░"<<endl;
// cout<<"░║║║░║░║░░║░░░░░░╠╩╗░╠═╣░║░║░"<<endl;
// cout<<"░║╚╝░╚═╝░░║░░░░░░╚═╝░║░║░╩═╝░"<<endl;
// }

// void PrintLostText(){
    
// cout<<"████████████████████████████████████████████"<<endl;
// cout<<"█▄─█─▄█─▄▄─█▄─██─▄███▄─▄███─▄▄─█─▄▄▄▄█─▄─▄─█"<<endl;
// cout<<"██▄─▄██─██─██─██─█████─██▀█─██─█▄▄▄▄─███─███"<<endl;
// cout<<"▀▀▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▀▀▀▄▄▄▄▄▀▄▄▄▄▀▄▄▄▄▄▀▀▄▄▄▀▀"<<endl;
// }

// void PrintWonText(){    
//     cout<<"████████████████████████████████████████████"<<endl;
//     cout<<"█▄─█─▄█─▄▄─█▄─██─▄███▄─█▀▀▀█─▄█─▄▄─█▄─▀█▄─▄█"<<endl;
//     cout<<"██▄─▄██─██─██─██─█████─█─█─█─██─██─██─█▄▀─██"<<endl;
//     cout<<"▀▀▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▀▀▀▀▄▄▄▀▄▄▄▀▀▄▄▄▄▀▄▄▄▀▀▄▄▀"<<endl;
// }

// double playRuletka(double money)
// {
//      //random number from 1 to 4, simulation of rotating
//     system("cls");
//     PrintLines();
//     srand(time(0));
//     int successNumber = rand()%36;
//     int choosedNumber;
//     double hajs;
//     bool isWon = false;
//     string answer;

//     if (money>0){
//         do
//         {
//             do
//             {
//                 cout<<"Choose number from 0-36: ";
//                 cin>>choosedNumber;
//                 if (choosedNumber>36||choosedNumber<0){
//                     system("cls");
//                     cout<<"Please choose the number between 0-36"<<endl;
//                 }

//             }while(choosedNumber>36 || choosedNumber<0);
//             do{
//                 cout<<"How much money do you want to bet ?: ";
//                 cin>>hajs;
//                 if(hajs>money)
//                 {
//                     system("cls");
//                     cout<<"You dont have that much money ;/"<<endl;
//                 }
//             }while(hajs>money);
//             PrintLines();
//             system("cls");
//             PrintLines();
//             cout<<"PRESS ENTER TO ROLL....."<<endl;
//             getch();
            
//             if(choosedNumber == successNumber)
//             {
//                 isWon = true;
//                 system("cls");
//                 PrintWonText();
//                 cout<<" "<<endl;
//                 cout<<"Your number: "<<choosedNumber<<endl;
//                 cout<<"Rolled number: "<<successNumber<<endl;
//                 cout<<"You won !!! :D"<<endl;
//                 cout<<hajs<<" HAS BEEN ADDED TO YOUR ACCOUNT BALANCE"<<endl;
//                 cout<<""<<endl;
//                 money += hajs;
//                 PrintWinImage();
//                 cout<<""<<endl;
//                 PrintLines();
//             }
//             else
//             {
//                 isWon = false;
//                 money -= hajs;
//                 system("cls");
//                 PrintLostText();
//                 cout<<" "<<endl;
//                 cout<<"Your number: "<<choosedNumber<<endl;
//                 cout<<"Rolled number: "<<successNumber<<endl;
//                 cout<<"You have lost "<<hajs<<"$ :("<<endl;
//                 cout<<""<<endl;
//                 PrintLostImage();
//                 cout<<""<<endl;
//                 PrintLines();
//             }

//             cout<<"Your balance is "<<money<<endl;
//             if(money>0)
//             {
//                 cout<<"Do you want to play again ? t/n: ";
//                 cin >> answer;
//                 if(answer=="t")
//                 {
//                     successNumber = rand()%36;
//                     system("cls");
//                 }
//             }
//             else
//             {
//                 cout<<"SORRY BUT YOU HAVE NO FUNDS TO PLAY :("<<endl;
//                 cout<<"Your balance is: "<<money<<endl;
//             }

//         }while(answer !="n" && money>0);
//     }
//     else
//     {
//         system("cls");
//         cout<<"YOU HAVE LOST ALL YOUR MONEY :("<<endl;
//     }
//     return money;
// }
