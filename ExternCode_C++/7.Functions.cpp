// Functions
/* 1st way:
   You can mention the function before main and then use it in main function.
   Example:
*/
#include <iostream>
using namespace std;
void example1()
{
    cout << "Hey! Have a good day.";
}
int main()
{
    example1();
    return 0;
}
/* 2nd way:
   In case if you want to mention the function below main, 
   you should mention the name of the function above int main.
   Example:
*/
#include <iostream>
using namespace std;
void example2();
int main()  
{
    example2();
    return 0;
}
void example2()
{
    cout << "Hey! Have a wonderful day.";
}