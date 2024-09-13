#include <iostream>
#include <map>
using namespace std;

class Car
{
public:
    virtual void Start() // The existence is virtual
    {
        cout << "Car Started" << endl;
    }

    virtual void Stop()
    {
        cout << "Car Stopped" << endl;
    }

    virtual void Hello() = 0; // Pure virtual function
};

class Innova : public Car
{
public:
    void Start() 
    {
        cout << "Innova Started" << endl;
    }

    void Stop() 
    {
        cout << "Innova Stopped" << endl;
    }

    void Hello() 
    {
        cout << "Hello from Innova" << endl;
    }
};

class Swift : public Car
{
public:
    void Start() 
    {
        cout << "Swift Started" << endl;
    }

    void Stop() 
    {
        cout << "Swift Stopped" << endl;
    }

    void Hello() 
    {
        cout << "Hello from Swift" << endl;
    }
};

int main()
{
    Car *c = new Innova();
    c->Start();
    c->Hello(); // Call the Hello function
    delete (c);

    c = new Swift();
    c->Start();
    c->Hello(); // Call the Hello function
    delete (c);

    return 0;
}
