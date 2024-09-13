# include<vector>
# include<map>
# include<set>
# include<iostream>
using namespace std;

int main()
{
    map<int,string> A1;

    A1[0] = "Hello";
    A1[1] = "World";
    A1[2] = "How are you";

    for(auto &item:A1)
    {
        cout<<item.first<<" "<<item.second<<endl;
    }

    //Fidning the values we will have 

    auto it = A1.find(1);

    if(it)
    {
        cout<<endl<<"YES"<<endl;
    }
}