// Objects and Classes
#include<iostream>
using namespace std;
class AtheeqsClass{          // Create/Declare a class with name of your choice
    public:                  // This is called access modifier. There are two types:Public and Private
        void greetings(){    // Use public to use the function anywhere in the whole program
            cout << "Its nice to meet you!";
        }
};
int main(){
    AtheeqsClass AtheeqsObject;  // Give name to your object
    AtheeqsObject.greetings();   // use dot seperator to use the function
    return 0;
} 