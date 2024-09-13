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
        cout<<"\nThe non aparameterized base class \n";
    }

    Base(int l,int b)
    {
        this->l = l;
        this->b = b;
        cout<<"\nThe parameterized base class \n";
    }
};

class Derived : public Base
{
    int height;


    public:
    Derived()
    {
        cout<<"\nThe derived class non parameterixed constructor called\n";
    }

    Derived(int a,int b,int c):Base(a,b)
    {
        this->height = c;
        cout<<"\nThe derived class parameterized Constructor is called\n";

        cout<<"\nThe values are as follows ->> %d %d %d\n"<<" "<<a<<" "<<b<<" "<<this->height;
    }
};

int main()
{
    Derived d(1,2,3);
    /**
     * @brief 
     * The private protected and public
     * 
     * Differences 
     * 
     *   
     * 
     */
}