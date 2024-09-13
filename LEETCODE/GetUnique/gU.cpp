# include<iostream>
# include<vector>
# include<map>
# include<algorithm>
# include<set>
using namespace std;



int main()
{
    vector<int> A1 = {1,2,3,3,4,5,5,4,3,2,1};
    set<int> uniqueElement;

    for (int i = 0; i < A1.size(); i++)
    {
        uniqueElement.insert(A1[i]);
        /* code */
    }

    cout<<"The unique elemens in the array are"<<endl;

    for (int elem:uniqueElement)
    {
        cout<<elem<<" ";
        /* code */
    }
    cout<<endl;

    return 0;
    
    
}