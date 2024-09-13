# include<iostream>
# include<vector>
using namespace std;


int main()
{
    vector<int> Arr{1,2,3,4,5};

    for (int i = 0; i < Arr.size(); i++)
    {
        cout<<Arr[i]<<endl;
        /* code */
    }

    //The iteration of an arrau

    cout<<"The representation of the new array"<<endl;
    vector<int> New1 = {1,2,3,4,5,6};

    int size = New1.size();
    vector<int> :: iterator itr = New1.begin();

    for (int i = 0; i < size; i++)
    {
        cout<<*(itr)+i<<endl;
        /* code */
    }
    

    cout<<endl<< endl;


    pair<int,int>  A11 = {1,2};

    cout<<A11.first<<" " <<A11.second<<endl;



}