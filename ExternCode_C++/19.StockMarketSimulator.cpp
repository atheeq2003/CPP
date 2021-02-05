// Stock Market Simulator
#include<iostream> 
#include<cmath>
using namespace std;
int main(){
    float p = 10000;               //Principle: The Current Amount
    float r = 0.01;                //Rate: The Interest you need
    float a;                       //Amount you get each day after applying interest
    int days;
    for(days = 1;days <= 20;days++){
        a = p * pow(1+r, days);
        cout << "Day " << days << ": " << a << endl;
    }
}