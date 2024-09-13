# include<iostream>
# include<map>
using namespace std;

class Base
{
    private:
    int a;
    int b;

    public:
    Base()
    {
        cout<<"The base class non parameterized constructor is called"<<endl;
    }

    Base(int a,int b)
    {
        cout<<"The Base class Parameterized constructor is called"<<endl;
        this->a = a;
        this->b = b;
    }
};

class Derived : public Base
{
    private:
    int c;
    int d;

    public:
    Derived()
    {
        cout<<"The derived class non parameterized constructor is called"<<endl;
    }

    Derived(int a,int b,int c,int d):Base(a,b)
    {
        cout<<"The derived class parameterized constructor are called"<<endl;
    }
};


int main()
{
    Derived d(1,2,3,4);
}