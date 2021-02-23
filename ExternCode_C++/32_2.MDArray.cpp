// MD Array - Multi Dimensional Array
#include<iostream>
using namespace std;
int main(){
    int atheeq[3][3] = {{0,1,2}, {3,4,5}, {6,7,8}};
    for(int rows = 0;rows < 3;rows++){
        for(int columns = 0; columns < 3;columns++){
            cout << atheeq[rows][columns] << " ";
        }
        cout << endl;
    }
}