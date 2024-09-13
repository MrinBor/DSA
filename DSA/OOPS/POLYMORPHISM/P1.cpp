# include<iostream>
using namespace std;


class Parent
{
    public:
    virtual void Display()
    {
        cout<<"Display of the parent"<<endl;
    }
};

class Child:public Parent 
{
    public:
    void Display()
    {
        cout<<"Display of the Child"<<endl;
    }
};

int main()
{


    Child c;
    c.Display();

    Parent *p = new Child();//Called based upon the pointer
    //And not the object type

    p->Display();

    Parent *p2 = new Parent();
    p2->Display();
    
    
    
    //Display of the Child simply
    //Latest definition will be accepted


    /**
     * @brief 
     * 
     * FUNCTION overridding
     * Overriding means the declaration or writing the same
     * Function as in the base and the derived class
     * 
     */
}



// Display of the function
//The function polymorphism