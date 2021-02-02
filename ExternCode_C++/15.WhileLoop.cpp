// While Loop
#include<iostream>
using namespace std;
int main()
{
    int RollNo = 1;
    while(RollNo <= 10){
        cout << "Roll No: " << RollNo << endl;
        RollNo++;            // We add/increment to make the condition false.
    }
    return 0;
}