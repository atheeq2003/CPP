// Pass By Value and Pass By Reference
#include<iostream>
using namespace std;
void passbyvalue(int x){
    x = 100;
}
void passbyreference(int *x){
    *x = 50;
};
int main(){
    int atheeq = 10;
    int spidey = 15;
    passbyvalue(atheeq);
    passbyreference(&spidey);
    cout << atheeq << endl;
    cout << spidey << endl;
}