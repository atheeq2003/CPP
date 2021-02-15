// Function Overloading
#include<iostream>
using namespace std;
void printNumber(int x){
    cout << x << endl;
}                            // Using of same function another time
void printNumber(int x, int y){
    cout << x << endl;
    cout << y << endl;
}
int main(){
    int a = 10; 
    float b = 24.5678;
    printNumber(a);
    printNumber(b, a);
}