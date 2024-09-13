# include<iostream>
# include<vector>
using namespace std;

void printVec(vector<pair<int,int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
        /* code */
    }
    
}

int main()
{
    vector<pair<int,int>> A1={{1,2},{3,4},{5,6}};
    printVec(A1);
}