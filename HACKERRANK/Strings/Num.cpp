#include <iostream>
#include <string>
using namespace std;
# define MAX 20

int main()
{
    string a,b;
    cin>>a>>b;

    cout<<a.size()<<" "<<b.size()<<endl;


    //Again we will have the following
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b<<endl;

}