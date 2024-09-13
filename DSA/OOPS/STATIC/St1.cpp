# include<iostream>
# include<map>
using namespace std;

 
//The static memebers
//Static mebers are allocated only one time vlaues

class Test
{
    private:
    int a;
    int b;

    public:
     static int count;

     Test()
     {
        this->a = 10;
        this->b = 20;

        count++;
     }
};

int Test::count = 0;

int main()
{
    Test t1;
    cout<<t1.count<<endl;
    Test t2;
    cout<<t2.count<<endl;
}

//The static declaration of the clas
