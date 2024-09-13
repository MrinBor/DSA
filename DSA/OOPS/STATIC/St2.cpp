# include<iostream>
# include<map>
using namespace std;


class Test
{
    private:
    int a;
    int b;

    public:
    static int count;

    Test()
    {
        this->a = 100;
        this->b = 200;
        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int Test:: count = 0;
 


int main()
{
    Test t1;
    Test t2;

    int val = t1.getCount();
    cout<<"The value of the count variable is "<<val<<endl;
}