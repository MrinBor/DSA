# include<iostream>
# include<vector>
# include<map>
using namespace std;

int main()
{
    map<int,int> A1;
    int a;
    cin>>a;
    cout<<"Enter the numbe rof entris in the array"<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<<"Enter the entry number "<<(i+1)<<endl;
        int a1,a2;
        cin>>a1>>a2;

        A1.insert({a1,a2});
        /* code */
    }


    for(auto &it : A1)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}