// Program: Use of function // Function: Used to reuse
#include <iostream>
int atheeq()
{
    std::string name;
    int age;
    std::cout << "Enter your Name: ";
    std::cin >> name;
    std::cout << "Enter your Age: ";
    std::cin >> age;
    return 0;
}
int main()
{
    std::cout << "Hi! Please Enter your Details: \n";
    atheeq();
    atheeq();
    return 0;
}
