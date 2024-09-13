# include<iostream>
# include<malloc.h>
using namespace std;

class Base
{
    int a;

    public:
    Base()
    {
        cout<<"Base class Invoked"<<endl;
    }

    void B1()
    {
        cout<<"B1 Class"<<endl;
    }
};


class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"The derived class is Invoked"<<endl;
    }

    void D1()
    {
        cout<<"The D1 Class"<<endl;
    }
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->B1();//Pointer type-->> The avilable functions called accordingly

    
}


/**
 * 
 * 
 *  
 * @file 
 * 
 * Single
 * Hierarchical
 * Multi Level
 * Multiple
 * 
 * In1.cpp
 * The simple or simple inheritence
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-09-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */