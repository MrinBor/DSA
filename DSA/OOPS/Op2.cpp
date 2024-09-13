# include<iostream>
# include<map>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle()
    {
        this->length = 0;
        this->breadth = 0;
    }

    void setLength(int l)
    {
        this->length = l;
    }

    void setBreadth(int b)
    {
        this->breadth = b;
    }

    int getLength()
    {
        return this->length;
    }

    int getBreadth()
    {
        return this->breadth;
    }

    
};


class Cuboid : public Rectangle
{
    private:
    int height;

    public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        setLength(l);
        setBreadth(b);
        this->height = h;
    }

    int Volume()
    {
        int vol = this->height*this->getLength()*this->getBreadth();
        printf("\nThe volume of the Cuboid is = %d \n",vol);
    }

};

int main()
{
    Cuboid c (1,2,3);
    c.Volume();
}