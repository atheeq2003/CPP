// If Else Statement
#include <iostream>
using namespace std;
int main()
{
    int darkred = 12;
    int red = 10;
    int black = 8;
    if (red < 10)
    {
        if (darkred > red)                 // Nesting if else
        {
            cout << "CARNAGE" << endl;
        }
        else
        {
            cout << "SPIDER MAN" << endl;
        }
    }
    else
    {
        cout << "VENOM";
    }
}