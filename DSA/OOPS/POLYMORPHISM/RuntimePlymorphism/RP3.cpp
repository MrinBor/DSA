# include<iostream>
# include<map>
using namespace std;

class Base
{
    private:
    int a;

    public:

    Base()
    {
        cout<<"The base class Constructor is called "<<endl;
    }

    virtual void B1()
    {
        cout<<"Most Base1";
    }

    virtual void B2()
    {
        cout << "Most Base1";
    }

    virtual void B3()=0;
};

class Derived1:public Base
{
    private:
    int b;

    public:
    Derived1()
    {
        cout<<"The derived class 1 constructor is called "<<endl;
    }

    void B1()
    {
        cout<<"Derived 1"<<endl;
    }

    void B2()
    {
        cout << "Derived 1" << endl;
    }

    void B3()
    {
        cout << "Derived 1" << endl;
    }

};

class Derived2:public Base
{
private:
    int b;

public:
    Derived2()
    {
        cout << "The derived class 2 constructor is called " << endl;
    }

    void B1()
    {
        cout << "Derived 2" << endl;
    }

    void B2()
    {
        cout << "Derived 2" << endl;
    }

    void B3()
    {
        cout << "Derived 2" << endl;
    }

};

int main()
{
    Derived1 d1;
    d1.B1();
    d1.B2();

    Derived2 d2;
    d2.B1();
    d2.B2();
}