# include<iostream>
# include<map>
# include<vector>
using namespace std;

int main()
{
    map<int,string> A1;
    A1[0] = "Hello World";
    cout<<A1[0]<<endl;

    auto it = A1.find(0);
    if(it==A1.end())
    {
        cout<<"VALUE NOT FOUND"<<endl;
    }

    if (it == A1.end())
    {
        cout<<"ITEM NOT FOUND"<<endl;
    }

    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
        cout<<"ITEM FOUND"<<endl;
    }
}