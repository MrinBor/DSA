# include<iostream>
# include<malloc.h>
# include<map>
# include<set>
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
        cout<<"Enter the entry number" <<(i+1)<<endl;
        cin>>a1;
        cin>>a2;

        A1.insert({a1,a2});
        /* code */
    }

    int ind;
    cout<<"Enter an index to search"<<endl;
    cin>>ind;

    auto it = A1.find(ind);
    //auto it = A1.find(ind);

    if(it == A1.end())
    {
        cout<<"The index found not found"<<endl;
    }

    else
    {
        cout<<"Index Found"<<endl;
    }
    
}