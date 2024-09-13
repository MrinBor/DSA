# include<iostream>
# include<vector>
# include<map>
using namespace std; 

//Now we will haev the following
//The implementation of the maps

int main()
{
    map<int,string> m ;

    int a; 
    printf("\nEnter the number of entries \n");
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the entry number %d \n", (i + 1));
        int a;
        string b;
        cin>>a;
        cin>>b;
        m.insert({a,b});
        /* code */
    }

    map<int,string> :: iterator it;

    // // \\ //
    for(it = m.begin();it!=m.end();it++)
    { 
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}

// rhe red black trees
// The memory Space


// A mapstores a key value pairs
// Maps -->> cereating mapping of th values
/**
 * @brief
 *
 * 
 * 
 * 
 * The help in crating direct mapping
 *
 * Red Black trees
 *
 *
 *
 */