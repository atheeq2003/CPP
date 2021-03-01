// Ponter Maths
#include<iostream>
using namespace std;
int main(){
    int atheeq[5];
    int *x = &atheeq[0];
    int *x1 = &atheeq[1];
    
    cout << x << endl;
    cout << x1 << endl;
    x += 2;                // doing this does not add 2 to the address, but multiples size of data
    cout << x << endl;     // type 2 times.
}