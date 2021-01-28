// Objects and Classes
#include<iostream>
using namespace std;
class AtheeqsClass{              // Create/Declare a class with name of your choice
    public:                      // Use public to use anywhere in the whole program
        void greetings(){
            cout << "Its nice to meet you!";
        }
};
int main(){
    AtheeqsClass AtheeqsObject;  // Give name to your object
    AtheeqsObject.greetings();   // use dot seperator to use the function
    return 0;
}