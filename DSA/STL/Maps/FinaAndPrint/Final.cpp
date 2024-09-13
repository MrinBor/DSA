# include<iostream>
# include<map>
# include<vector>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the no of entries "<<endl;
    cin>>a;

    map<string,int> N1;

    for (int i = 0; i < a; i++)
    {
        string a;
        cout<<"Enter the string number "<<(i+1)<<endl;
        cin>>a;

        N1[a]++;
        /* code */
    }

    string index;
    cout<<"Enter an index to search "<<endl;
    cin>>index;

    auto it = N1.find(index);
    if(it == N1.end())
    {
        cout<<"Element not found "<<endl;
    }
    else
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}