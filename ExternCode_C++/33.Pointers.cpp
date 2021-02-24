// Pointers
#include<iostream>
using namespace std;
int main(){
    int atheeq;
    cout << &atheeq << endl;     // Using "&" Before the variable prints the address of the variable
    int *atheeqPointer;          // Declaring pointer variable     
    atheeqPointer = &atheeq;     // There is no need to put astrix before the pointer variable next 
    cout << atheeqPointer << endl; // time when using it, Cause the C++ recognises the pointer variable
}                                 // Then the address gets stored in pointer variable