// Default Arguments
#include<iostream>
using namespace std;
void volume(int l=5, int w=4, int h=5){  // these are the default arguments.
    cout << l * w * h;                   // if the user doesnt enter any values in function call it
};                                       // it take the default value
int main(){                          
    volume();                            // this is where we enter values
}

