# include<iostream>
# include<map>
# include<vector>
# include<iostream>
using namespace std;

int main()
{
    map<int,string> A1;

    int a;
    cout<<"Enter the number of entries in the map"<<endl;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        int a1;
        string a2;
        cout<<"Enter the entry number "<<(i+1)<<endl;
        cin>>a1;
        cin>>a2;
        A1.insert({a1,a2});
        /* code */
    }

    int index;
    cout<<"Enter an index to search in the range"<<1<<A1.size()<<endl;
    cin>>index;

    //The useof the auto keyword

    auto it = A1.find(index);
    if(it == A1.end())
    {
        cout<<"Index not found "<<endl;
    }
    else
    {
        cout<<"Index Present"<<endl;
    }
//auto it -->> log(n) Opearations are required
    cout<<A1<<endl;
    //Indexes are stored in the range of 1 onwards by default
    
}