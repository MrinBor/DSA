# include<iostream>
# include<map>
using namespace std;

class Test
{
    private:
    int a;
    protected:
    int b;

    public:
    int c;

    friend void Function();
    //This is useful in operator overloading
     
};


//Outside or a global function
//Is having 
//Upon Object only public memebers are accessible

//Allow this function
// Void function

void Function()
{
    Test t;
    t.c = 122;
    cout<<t.c<<endl;
    t.b = 100;
    t.a = 90;
    //When declared friend 
    //Then we can access the interbal memebts successfully

}

int main()
{
    Function();
}