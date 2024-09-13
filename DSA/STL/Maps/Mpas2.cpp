#include <iostream>
#include <map>
using namespace std;

void PrintDefault(map<int,int> Arr)
{
    int size = Arr.size();//The siz eof the map
    

    for(auto &it:Arr)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    map<int,int> A1;

    cout<<"Enter the number fo entries in the map"<<endl;
    int a,b;

    for (int i = 0; i < a; i++)
    {
        cout<<"Enter the first variable "<<endl;
        cout<<"Enter the second variable"<<endl;
        cin >> a;
        cin >> b;

        A1.insert({a,b});
        /* code */
    }

    for(auto &it:A1)
    {
        cout<<(it.first)<<it.second<<endl;
    }
    
    
}