// Sentinal Controlled Loops
#include<iostream>
using namespace std;
int main(){
    int age;
    int agesum = 0;
    int people = 0;
    cout << "Enter the person's age or enter -1 to exit: " << endl;
    cin >> age;
    while(age != -1){
        agesum = agesum + age;
        people++;
        cout << "Enter next person's age or enter -1 to exit: " << endl;
        cin >> age;
    }
    cout << "Number of people: " << people << endl;
    cout << "Average age: " << agesum/people << endl;  
}
