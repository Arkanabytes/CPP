#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
 
int Dice(int &);            //genera un radom del uno al siete ...For generating Random number between (0-7)
 
int main()
{
    int p1 = 0;
    p2 = 0;
    p3 = 0; 
    p4 = 0; 
    i = 1;
    value;
    result = 0;
 
    srand(time(0));
 
    while (!result)
    {
        system("cls");            //limpia la consola....for clearing cnsole
        cout << setw(60) << "Ludo Game\n\n";
 
        //formato de salida...for formatting output
        for (int i = 0; i < 40; i++)
            cout << "==";
 
        //para el jugador 1 For player-1
        if (i % 4 == 1)
        {
            cout << "Player-1 turn:\nPress any key to roll dice.....\t";
            _getch();
            cout << Dice(value);
 
            if (value == 6)
            {
                cout << "Press any key to Roll dice again.....\t";
                _getch();
                cout << Dice(value);
                if (value == 6)
                {
                    cout << "\nTurn of player-1 ended because of 2 consecutive 6's without sum";
                    continue;            //moves to next iteration if two 6's occure
                }
                p1 += value;
            }
 
            else if (p1 != 0 && p1 + value <= 50)
                p1 += value;
 
            if (p1 == 50)
                result = 1;
        }
 
        //For player-2
        else if (i % 4 == 2)
        {
            cout << "\nPlayer-2 turn:\nPress any key to roll dice.....\t";
            _getch();
            cout << Dice(value);
 
            if (value == 6)
            {
                cout << "Press any key to Roll dice again.....\t";
                _getch();
                cout << Dice(value);
                if (value == 6)
                {
                    cout << "\nTurn of player-2 ended because of 2 consecutive 6's without sum";
                    continue;            //moves to next iteration if two 6's occure
                    p2 += value;
                }
 
                else if (p2 != 0 && p2 + value <= 50)
                    p2 += value;
 
                if (p2 == 50)
                    result = 2;
            }
        }
 
        //For Player-3
        else if (i % 4 == 3)
        {
            cout << "\nPlayer-3 turn:\nPress any key to roll dice.....\t";
            _getch();
            cout << Dice(value);
 
            if (value == 6)
            {
                cout << "Press any key to Roll dice again.....\t";
                _getch();
                cout << Dice(value);
                if (value == 6)
                {
                    cout << "\nTurn of player-3 ended because of 2 consecutive 6's without sum";
                    continue;            //moves to next iteration if two 6's occure
                }
                p3 += value;
            }
 
            else if (p3 != 0 && p3 + value <= 50)
                p3 += value;
 
            if (p3 == 50)
                result = 3;
        }
 
        //For Player-4
        else if (i % 4 == 0)
        {
            cout << "\nPlayer-4 turn:\nPress any key to roll dice.....\t";
            _getch();
            cout << Dice(value);
 
            if (value == 6)
            {
                cout << "Press any key to Roll dice again.....\t";
                _getch();
                cout << Dice(value);
                if (value == 6)
                {
                    cout << "\nTurn of player-4 ended because of 2 consecutive 6's without sum";
                    continue;            //moves to next iteration if two 6's occure
                }
                p4 += value;
            }
 
            else if (p4 != 0 && p4 + value <= 50)
                p4 += value;
 
            if (p4 == 50)
                result = 4;
        }
 
        i++;
    }
    cout << endl << setw(50);
 
    //Displays Winner
    switch (result)
    {
    case 1:
        cout << "****Player-1 Won****";
        break;
    case 2:
        cout << "****Player-2 Won****";
        break;
    case 3:
        cout << "****Player-3 Won****";
        break;
    case 4:
        cout << "****Player-4 Won****";
        break;
    }
 
    cout << endl;
    return 0;
}
 
 
//genera valores...For generating dice score
int Dice(int &value)
{
    do
    {
        value = rand();
    } while (value < 1 || value>6);
    return value;
}
