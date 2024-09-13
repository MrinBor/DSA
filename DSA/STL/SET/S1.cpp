# include<iostream>
# include<set>
using namespace std;


void Print(set<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }

    for(auto it = s.begin();it!=s.end();++it)
    {
        cout<<*it<<endl;
    }
}

int main()
{
    set<string> s;
    s.insert("ABC");
    s.insert("ABC");
    s.insert("DEF");
    s.insert("GHI");

    Print(s);

    auto it = s.find("ABC");

    if(it!=s.end())
    {
        cout<<"Found!!" <<(*it)<<endl;
    }
}