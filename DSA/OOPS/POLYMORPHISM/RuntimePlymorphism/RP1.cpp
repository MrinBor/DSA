# include<iostream>
# include<map>
using namespace std;

class Car
{
    public:
    virtual void Start()//The existense is virtual
    //Does not exists in real world
    {
        cout<<"Car Started"<<endl;
    }

    virtual void Stop()
    {
        cout<<"Car stopped"<<endl;
    }

    // virtual void Hello() = 0;//Virtual function
    //Can be decalred like this also  
};

class Innova: public Car
{
    public:
    void Start()
    {
        cout<<"Innova Started"<<endl;
    }
   
    void Stop()
    {
        cout<<"Innova Stopped"<<endl;
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
};

int main()
{
    Car *c =  new Innova();
    c->Start();
    delete(c);

    c = new Swift();
    c->Start();
    delete(c);

}