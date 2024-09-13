# include<iostream>
# include<map>
# include<vector>
using namespace std;

int main()
{
    map<string,int> Array;

    int a;
    cout<<"Enter the no of entries in the map "<<endl;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        string a1;
        cout<<"Enter the entry number "<<(i+1)<<endl;
        cin>>a1;
        Array[a1]++; // Inserting the element
        /* code */
    }

    for(auto &pr:Array)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    

}