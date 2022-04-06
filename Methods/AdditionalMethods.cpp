#include <iostream>
#include <limits>
#include <chrono>
#include <thread>
#include <regex>
#include <windows.h>
#include <fstream>
using namespace std;

void pause()
{
    /* ... */
    cout << "PRESS ENTER TO START.........";
    /* ensure that  cin is ready for inputs */
    cin.clear();
    /* ignore any pressed key until the <enter> key (included) */
    cin.ignore(
        numeric_limits<streamsize>::max(), '\n');
}

void breakLine()
{
    cout << " " << endl;
}

void PrintDashes()
{
    cout << "----------------------------------" << endl;
}

void PrintRecordsText()
{
    cout << "████████████████████████████████████████████████████████████████████" << endl;
    cout << "█▄─▄─▀█▄─▄▄─█─▄▄▄▄█─▄─▄─███▄─▄▄▀█▄─▄▄─█─▄▄▄─█─▄▄─█▄─▄▄▀█▄─▄▄▀█─▄▄▄▄█" << endl;
    cout << "██─▄─▀██─▄█▀█▄▄▄▄─███─██████─▄─▄██─▄█▀█─███▀█─██─██─▄─▄██─██─█▄▄▄▄─█" << endl;
    cout << "▀▄▄▄▄▀▀▄▄▄▄▄▀▄▄▄▄▄▀▀▄▄▄▀▀▀▀▄▄▀▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀▄▄▄▄▀▄▄▀▄▄▀▄▄▄▄▀▀▄▄▄▄▄▀" << endl;
}

void WriteToTop10(string name, double money)
{

    fstream log;
    log.open("Top10.txt", fstream::app);
    if (log.is_open())
    {
        log << name << "  - " << money << endl;

        log.close();
    }
}

void BaseTop10Text()
{
    fstream log;
    log.open("Top10.txt", fstream::trunc);
    if (log.is_open())
    {
        log << "Player      - Score\n";
        log << "--------------------\n";

        log.close();
    }
}

void PrintTop10()
{
    system("cls");
    string fileName = "Top10.txt";
    string line;

    regex re("([a-zA-Z ]*)[- ]*([0-9]*)", regex::extended);

    ifstream file(fileName);
    PrintRecordsText();
    cout << "" << endl;
    PrintLines();
    cout << "" << endl;
    while (getline(file, line))
    {
        try // if regex did not find correct patterns, we ignore that
        {
            smatch m;
            regex_search(line, m, re);

            // we expect 3 parts as result, first is the full string, second is our nickname, last is the number
            if (m.size() == 3)
            {
                // as we have also the trailing whitespaces in the nickname part, we remove them here
                string nickname = regex_replace(string(m[1]), regex(" +$"), "");
                // create an int from found number string
                int number = stoi(m[2]);

                cout << nickname << ": " << number << "$" << endl;
            }
        }
        catch (...)
        {
        }
    }
    cout << " " << endl;
    PrintLines();
    int choice;

    do
    {
        cout << "OPTIONS: " << endl;
        cout << "1. CLEAR THE LIST" << endl;
        cout << "2. GO BACK TO MENU" << endl;
        PrintDashes();
        cout << "Your choice: ";
        cin >> choice;
        while (cin.fail())
        {
            cout << "ERROR : YOU HAVE TO USE NUMBER !" << endl;
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Your choice: ";
            cin >> choice;
        }

        if (choice == 1)
        {
            std::ofstream ofs;
            ofs.open("Top10.txt", std::ofstream::out | std::ofstream::trunc);
            ofs.close();

            BaseTop10Text();

            system("cls");
            PrintTop10();
        }
        else if (choice == 2)
        {
            PlaySound(NULL, NULL, SND_ASYNC);
            PlaySound("Music/menugier.wav", NULL, SND_FILENAME | SND_ASYNC);
            system("cls");
            break;
        }
        else
            system("cls");
        cout << "Choose valid number..." << endl;

    } while (choice > 2 || choice < 1);
}
