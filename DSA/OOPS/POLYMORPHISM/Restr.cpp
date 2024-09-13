# include<iostream>
# include<map>
using namespace std;

class Base
{
    int a;
    public:
    virtual void Display()
    {
        cout<<"BASE"<<endl;
    }
};

class Derived:public Base
{
    int b;
    public:
    void Display()
    {
        cout<<"DERIVED"<<endl;
    }



};

int main()
{
    Base *b1 = new Derived();
    b1->Display();
}