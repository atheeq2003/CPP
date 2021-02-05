// Switch statement
#include<iostream>
using namespace std;
int main(){
    int Age;
    cin >> Age;
    switch(Age){
        case 16:
            cout << "You are a Teenage Spidey!" << endl;
            break;
        case 21:
            cout << "You are a Spidey pursuing in a university!" << endl;
            break;
        case 26:
            cout << "You are a responsible Spidey with more exp!" << endl;
            break;
        default:
            cout << "Be Patient Till The Spider to Bites You." << endl;   
    }
}