# include<iostream>
# include<map>
# include<vector>
# include<set>
# include<algorithm>
using namespace std;

int main()
{
    vector<int> A1 = {1,2,3,4,5,6,7};

    set<int> uniqueElement;

    for (int i = 0; i < A1.size(); i++)
    {
        uniqueElement.insert(A1[i]);

        cout<<"We wll have the folllowiing"<<endl;
        /* code */
    }

    cout<<"Inclusion of the element s"<<endl;

    for(int elem:  uniqueElement)
    {
        cout<<elem<<endl;
    }

    cout<<""<<endl;
    
}