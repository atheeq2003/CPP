// Logical Operator
#include<iostream>
using namespace std;
int main(){
    int age = 15;
    int money = 600;
    int age1 = 15;
    int money1 = 1000;
    if(age > 15 && money > 500){      // Both of the conditions must be true in order to execute
        cout << "You are allowed";
    }
    if(age1 > 18 || money1 > 800){    // Even if any one of the conditions is true the statement will
        cout << "You are allowed!";   // execute
    }
        
    
}