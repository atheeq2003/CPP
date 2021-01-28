// Functions With Multiple Parameters
#include<iostream>
using namespace std;
int addition(int a, int b, int x, int y){  // You can multiple parameters, you just need to seperate
    int answer;                            // them with a comma.
    answer = a + b + x + y;
    return answer;
}
int main(){
    cout << addition(7, 10, 7, 10);
    return 0;
}
