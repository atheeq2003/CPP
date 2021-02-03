// Variables in Classes
#include <iostream>
#include <string>
using namespace std;
class AtheeqsClass
{
public:
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }

private:
    string name;
};
int main()
{
    AtheeqsClass AtheeqsObject;
    AtheeqsObject.setname("Atheequr Rahaman");
    cout << AtheeqsObject.getname();
}