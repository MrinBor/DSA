# include<iostream>
# include<vector>
using namespace std;


int main()
{
    int a;
    vector<int> v;
    v.push_back(1);
    cout<<v[v.size()];
    cout<<endl<<endl;
    v.pop_back();
    cout << v[v.size()];
}