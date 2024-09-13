# include<iostream>
# include<map>
using namespace std;

class Outer
{
    public:
    int a = 100;//Non sttaic memebre
    static int b;//Static member

    void Function()
    {
        i.Show();
    }

    class Inner
    {
        public:
        int c = 25;

        void Show()
        {
            cout<<"Show"<<endl; 
            cout<<b<<endl;
        }

        // The inner classs can access the values of 
        // outer class if they are
        // Static
    }

    Inner i;
};

int Outer::b = 200;

/**
 * @brief 
 * Inner class -->> Writing a class inside another class
 * 
 * To redue the ambiguity of bigger class
 * 
 * @return int 
 */

int main()
{

}