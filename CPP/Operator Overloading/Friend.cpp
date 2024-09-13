#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    // Friend function to overload the + operator
    friend Complex operator+(Complex c1, Complex c2);

    void Display()
    {
        printf("\n%d + i%d\n", real, img);
    }
};

// Definition of overloaded + operator
Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.Display(); // Display c1
    c2.Display(); // Display c2

    Complex c3 = c1 + c2; // Add c1 and c2

    c3.Display(); // Display the result of c1 + c2
}
