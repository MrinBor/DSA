# include<iostream>
# include<map>
# include<vector>
using namespace std;


int main()
{
    map<string,int> A1;
    int n;
    cout<<"Enter the number of entries in the map "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        A1[s]++;
        /* code */
    }
    
    for(auto &it:A1)
    {
        cout<<(it).first<<" "<<(it).second<<endl;
    }
}