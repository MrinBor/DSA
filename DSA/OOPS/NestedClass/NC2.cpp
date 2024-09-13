#include <iostream>
using namespace std;

class Outer
{
public:
    int a = 100;  // Non-static member
    static int b; // Static member

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
            cout << "Show" << endl;
            cout << b << endl; // Access to static member of Outer
        }

        // The inner class can access the values of
        // outer class if they are static
    };

    Inner i;
};

// Definition of static member variable
int Outer::b = 200;

int main()
{
    Outer outer;
    outer.Function(); // Calls the Function() of Outer which in turn calls Show() of Inner

    Outer::Inner innerObj; // Creating an instance of Inner class
    innerObj.Show();       // Calling the Show() method of Inner class

    return 0;
}
