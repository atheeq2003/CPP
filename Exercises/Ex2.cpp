/* Program to get input from user: 
That is: Name, age, mark1, mark2, mark3
And Output the total of three Marks */
#include <iostream>
int main()
{
    std::string name;
    int mark1, mark2, mark3, age, total;
    std::cout << "Enter the Name: \n";
    std::cin >> name;
    std::cout << "Enter the Age: \n";
    std::cin >> age;
    std::cout << "Enter Mark1: \n";
    std::cin >> mark1;
    std::cout << "Enter Mark2: \n";
    std::cin >> mark2;
    std::cout << "Enter Mark3: \n";
    std::cin >> mark3;
    total = mark1 + mark2 + mark3;
    std::cout << "Total= \n" << total;
    return 0;
}