// Random Number Generator
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
int main(){
    int x;
    srand(time(0));
    for(x = 1;x <= 10;x++){
       cout << x << " " << 1 + (rand() % 6) << endl;
    }
}