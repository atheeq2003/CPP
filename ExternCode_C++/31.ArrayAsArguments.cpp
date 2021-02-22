// Array As Arguments
#include <iostream>
using namespace std;
void printarray(int arrayname[], int arraysize)
{
    for (int x = 0; x < arraysize; x++)
    {
        cout << arrayname[x] << endl;
    }
};
    int main()
    {
        int atheeq[3] = {5, 10, 15};
        int spidey[5] = {2, 4, 6, 8, 10};
        printarray(atheeq, 3);
        printarray(spidey, 5);
    }
