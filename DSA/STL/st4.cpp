# include<iostream>
# include<vector>
using namespace std;



void printVec(vector<pair<int,int>> &v)
{
    for (int i = 0; i < v.size() ; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;

        //v[i] is a pair 
        //pair has a first and a last element 
        //Nested loop printing

        /* code */
    }
    
}




int main()
{
    vector<pair<int,int>> v = {{1,2},{3,4},{5,6}};
    printVec(v);


    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;

        v.push_back({x,y});
        //Or we can have make_pair(x,y)
        /* code */
    }

    printVec(v);
    

}