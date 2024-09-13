# include<iostream>
# include<algorithm>
# include<map>
# include<vector>
using namespace std;

int main()
{
    vector<int> A1 = {1,2,3,4,5,5,4,3,2,1};

    int size = A1.size();

    cout<<"Unsorted Data representation"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<A1[i]<<endl;
        /* code */
    }
    
    std::sort(A1.begin(),A1.end());


    cout<<"Sorted data representation"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << A1[i] << endl;
        /* code */
    }
}