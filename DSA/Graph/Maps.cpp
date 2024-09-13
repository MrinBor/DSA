# include<iostream>
# include<bits/stdc++.h>
using namespace std;

//The key can be any complex container
int main()
{
    map<int,string> m;

    m[1]  = "abc";
    m[2]  = "def";

    cout<<m[1]<<endl;


    map<int,string> :: iterator it;

    for(it = m.begin();it!=m.end();++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    //int and the strinf types are here 

    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    m.insert({4,"afg"});

    print(m);
}

//Unordered maps 
//Normal maps 
// and
//unoreder
/**
 * @brief 
 * Normal map insetion
 * /They are stored in a sorted order
 * //The complexity will arise over here 
 * 
 * 
 * The value will be a pair
 * It willbe a key value pair
 * 
 * Seocnd an the third element 
 * 
 * Maps are not continuous
 * 
 * 
 * 
 */
