#include <iostream>
using namespace std;
#include <string>
class employee
{
    private:
    int id;
    string name;
    void show();
    public:
    void ip(string n, int i)
    {
        id=i;
        name=n;
        show();
    }
};
void employee::show(){
cout<<"Employee Name = "<<name<<endl;
cout<<"Employee ID = "<<id<<endl;
}
int main()
{
    employee e,e1;
    e.ip("Tarun",154);
    e1.ip("Kabir",124);
    return 0;
}
