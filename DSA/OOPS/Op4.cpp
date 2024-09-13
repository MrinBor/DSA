#include <iostream>
using namespace std;

class Base
{
private:
    int l;
    int b;

public:
    Base()
    {
        cout << "\nNon-parameterized Base class\n";
    }

    Base(int l, int b)
    {
        this->l = l;
        this->b = b;
    }

    void Display_Details()
    {
        printf("\nThe length = %d and breadth = %d\n", this->l, this->b);
    }
};

class Derived : public Base
{
private:
    int height;

public:
    Derived()
    {
        cout << "\nThe derived class non-parameterized constructor is called\n";
    }

    // Corrected Constructor
    Derived(int l, int b, int h) : Base(l, b), height(h)
    {
        cout << "\nThe derived class parameterized constructor is called\n";
    }

    void Display_Details_Derived()
    {
        Display_Details();
        printf("The height = %d\n", height);
    }
};

int main()
{
    Derived d(10, 20, 30);
    d.Display_Details_Derived();
    return 0;
}
