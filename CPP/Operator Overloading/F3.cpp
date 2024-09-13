# include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;

    public:
    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img  = img;
    }

    void Display()
    {
        cout<<real<<" + i "<<img<<endl;
    }

    friend Complex operator +(Complex a1,Complex a2);
};

Complex operator +(Complex a1,Complex a2)
{
    Complex temp;
    temp.real = a1.real+a2.real;
    temp.img  = a1.img +a2.img;
    return temp;
}

int main()
{
    Complex a1(1,2);
    a1.Display();

    Complex a2(3,4);
    a2.Display();

    Complex a3 = a1+a2;
    a3.Display();
}