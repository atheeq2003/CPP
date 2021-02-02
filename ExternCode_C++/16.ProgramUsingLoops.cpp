// Program using loops
#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    int num;
    int sum = 0;
    while(i <= 5){
        cin >> num;
        sum = sum + num;
        i++;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}