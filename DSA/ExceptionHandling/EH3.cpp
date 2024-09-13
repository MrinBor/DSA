# include<iostream>
# include<map>
using namespace std;


int Division(int a,int b)
{
    if(b == 0)
    {
        throw runtime_error("Division by Zero Error");


    }

    int c = a/b;
    return c;
}


int main()
{
    int a =100;
    int b =0 ;

    try
    {
        int c = Division(a,b);
        cout<<c<<endl;
    }

    catch(const runtime_error &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}