// Constructor
#include<iostream>
#include<string>
using namespace std;
class AtheeqsClass{
    public:
        AtheeqsClass(string z){
            setname(z);
        }
        void setname(string x){
            name = x;
        }
             string getname(){
                 return name;
             }
    private:
        string name;
};
int main(){
    AtheeqsClass AtheeqsObject("Atheeq\n");
    cout << AtheeqsObject.getname();
    AtheeqsClass AtheeqsObject2("Atheeq2");
    cout << AtheeqsObject2.getname();
    return 0;
}
