# include<iostream>
# include<map>
using namespace std;


//Forward declaration of the class is required over here

class Your;


class My
{
    private:
    int a;
    public:
    int b;

    friend Your;
};

class Your
{
    public:
    My m;

    void Function()
    {
        m.a =200;//Due to forward and the friend delarations
        //It is possible
        m.b = 100;//Can access the public data memebers only
    }

    void Display()
    {
        cout<<m.a<<" "<<m.b<<endl;
    }

    


};

int main()
{
    Your y;
    y.Function();
    y.Display();
}



/**
 * @file Friend2.cpp
 * If we want ht e provate members of one class to access the details of 
 * Another then we can use the friend clas
 * 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-09-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */