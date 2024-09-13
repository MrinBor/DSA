# include<iostream>
# include<vector>
# include<map>
using namespace std;

//Models of the same car
/**
 * @brief 
 * Extending the features of an existing thing
 * 
 * To be implemented in the subseauent model
 * 
 * Eg old model -->> New model
 * We can extend the existing design and enhance or extend the features
 * 
 * 
 * 
 * 
 * @return int 
 */

class Base
{
    public:
    int x;

    void Show()
    {
        cout<<x<<endl;
    }
};

class Derived:public Base
{
    public:
    int y;

    void Show()
    {
        cout<<x<<y<<endl;
    }
};



int main()
{
    Base b;
    b.x = 100;
    b.Show();

    Derived d;
    d.y =200;
    d.Show();
}