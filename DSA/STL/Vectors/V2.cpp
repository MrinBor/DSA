# include<iostream>
# include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};


    int size = v.size();
    cout<<"The size of the vector is = "<<size<<endl;


    //Iteration in a vector

    vector<int> :: iterator it = v.begin();


    for (it  = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<endl;
        /* code */
    }


    vector<int> iterator i = v.begin();
    for (i= v.begin(); i != v.end(); i++)
    {
        cout << (*i) << endl;
        /* code */
    }

    return 0;
    
}