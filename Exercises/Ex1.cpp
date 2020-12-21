// Program : 2 add, 2 div = (5*ans)
#include <iostream>
int main()
{
    float a, b;
    std::cout << "Enter the value for a: ";
    std::cin >> a;
    std::cout << "Enter the value for b: ";
    std::cin >> b;
    float add = (a + b) * 5, div = (a / b) * 5;
    std::cout << "Answer 1: " << add << "\n";
    std::cout << "Answer 2: " << div;
    return 0;
}