# include<iostream>
# include<map>
using namespace std;

class Base
{
    private:
    int l;
    int b;

    public:
    Base()
    {
        cout<<"\nNon parameterized Base class\n";
    }
    
    Base(int l,int b)
    {
        this->l = l;
        this->b = b;
    }

    void Display_Details()
    {
        printf("\nThe lenght = %d and breadth = %d\n",this->l,this->b);
    }
};

class Derived:public Base
{
    int height;

    public:
    Derived()
    {
        cout<<"\nThe derived class non parameterixed constructor is called\n";
    }

    Derived(int l,int b,int h):Base(int h)
    {

    }
};

int main()
{

}
