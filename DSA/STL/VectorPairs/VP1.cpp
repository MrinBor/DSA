# include<iostream>
# include<vector>
using namespace std;


int main()
{
    vector<pair<int,int>> P1 = {{1,2},{3,4},{5,6},{7,8}};
    vector<pair<int, int>>::iterator it;
    // it = P1.begin();

    for(it = P1.begin();it!=P1.end();it++)
    {
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    //The range based execution 
    //We will have the follwoing

    vector<int> v = {1,2,3,4,5,6};
    cout<<endl<<endl;


    for(int value : v)//The range based loops
    {
        cout<<value<<endl;
    }

    //Now we will have the following

    for(int v1 : v)
    {
        cout<<"The value -->> "<<v1<<endl;
    }


    //The use fot he reference values

    for(int &val_by_ref : v)
    {
        cout<<val_by_ref++<<endl;
    }

    cout<<endl<<endl;

    vector<pair<int,int>> Vp = {{1,2},{3,4}};
    for(pair<int,int> & Values : Vp)
    {
        cout<<Values.first<<" "<<Values.second<<endl;
    }
}