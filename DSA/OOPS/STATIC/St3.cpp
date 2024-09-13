//The static members
# include<iostream>
# include<map>
using namespace std;

class Innova
{
    public:

    static int price;

    Innova()
    {
        price++;
    }

    static int getPrice()
    {
        return price;
    }
};

int Innova::price = 0;


int main()
{
    //We can direclt acces the static data members ofa  partiu;ar class
    //We will have

    cout<<Innova::getPrice()<<endl;
    Innova in;




    cout<<"The price= "<<in.getPrice()<<endl;
    
}

// The static memebrs belongs to a class and not objects
// We not need to Buy something to know its price