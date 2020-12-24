// Program: Function - Parameters and Arguments
#include <iostream>
int atheeq(int a, int b) // In this line "atheeq(int a, int b)" are parameters
{ 
    std::cout << a + b << "\n";
    return 0;
}
int main()
{
    std::cout << "Addition of Two Numbers: \n";
    atheeq(5, 5); // These are Arguments
    atheeq(8, 8); // int a in parameter refers to 1st number and int b refers to second number
    return 0;
}