// Scope Resolution Operator
#include<iostream>
using namespace std;
int a = 10;              // This is called Global Variable
int main(){
    int a = 20;          // This is called Local Variable
    cout << ::a << endl; // When you run the program it will print the local variable
}                        // If you want to print the global variable,
                         // You need to prefix two colons in the variable 