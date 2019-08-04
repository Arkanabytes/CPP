#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char strrnd[10];
    srand(time(NULL));
    for(int i=0; i <= 9; i++)
        strrnd[i] = 33 + rand() % (126 - 33);
    cout << strrnd;
    cin.get();
}
