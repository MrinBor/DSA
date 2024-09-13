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
        printf("%d + %d i\n\n",real,img);
    }

    Complex add(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img  = img + x.img;

        return temp;
    }
};

int main()
{
    Complex a1(1,2);
    Complex a2(3,4);
    a1.Display();

    Complex a3 = a1.add(a2);

    a1.Display();
    a2.Display();

    a3.Display();
}

/**
 * @brief 
 *
 * The return tyope is also a complex number
 *  
 * 
 *
 * 
 * @brief
 * 
 *  Matrix addition
 * Overloading in case of calsses
 * 
 * The built in data types are
 * +
 * -
 * *
 * -
 *
 * 
 * Complex a+ib
 * 
 * 1 + i2
 * 5 + 7i
 * 
 * 
 * The additionon two complex numbers
 * 
 * i = root(-1)
 * @return int
 */
