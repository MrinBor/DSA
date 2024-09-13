# include<iostream>
# include<map>
# include<vector>
using namespace std;



int main()
{
    map<int,string> A1;
    int a;
    cout<<"Enter the number of entries"<<endl;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        int a1;
        string a2;
        cout<<" Enter the entry no  "<<(i+1)<<endl;
        cin>>a1;
        cin>>a2;
        A1.insert({a1,a2});
        /* code */
    }
    

    for(auto &it:A1)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

}