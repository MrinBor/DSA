# include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;

    public:
    Complex(int r=0,int i=0)
    {
        real = r;
        img  = i;
    }

    void Display()
    {
        printf("\n %d + i %d \n",real,img);
    }

    friend Complex operator+(Complex c1,Complex c2);
};

Complex operator +(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;

    return temp;
}

int main()
{
    Complex c1(1,2);
    c1.Display();
    Complex c2(3,4);
    c2.Display();
    Complex c3 = c1+ c2;
    c3.Display();
}