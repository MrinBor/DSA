# include<iostream>
# include<vector>
using namespace std;


int main()
{
    vector<int> v = {1,2,3,4,5};
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<endl;
        /* code */
        //We will be having a array of vectors

        // [1,2,3,4,5,6]
        // The vector is of continuous nature
    }


    cout<<endl;

    vector<int> ::iterator it = v.begin();
    for (it  = v.begin(); it != v.end(); ++it)
    {
        cout<<(*it)<<endl;
        /* code */
    }


    //Now we will have the following

    // vector<pair<int,int>> v_p = {{1,2},{3,4}};

    // vector<int> ::iterator it2;
    

    // for ( it2 = v_p.begin(); it2 != v_p.end(); it2++)
    // {
    //     cout<<(it2*).first<<endl;
    //     /* code */
    // }
    


    //Vectors 
    
    
}