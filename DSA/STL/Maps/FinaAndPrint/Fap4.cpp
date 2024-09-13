# include<iostream>
# include<map>
using namespace std;

int main()
{
    map<string,int> Arr;

    int n;
    cout<<"Enter the number of values in the map"<<endl;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        Arr[s]++;

        /* code */
    }

    for(auto pr:Arr)
    {
        cout<<pr.first<<" "<<pr.second<<endl; 
    }
    
}