# include<iostream>
# include<malloc.h>
# include<map>
# include<vector>
# include<algorithm>
using namespace std;

class Solution
{
    public:

    void Merge(vector<int> A1,int a1,vector<int> A2,int a2)
    {
        int size   = a1+a2;
        vector<int> Merged;

        for (int i = 0; i < a1; i++)
        {
            Merged.push_back(A1[i]);
            /* code */
        }

        for (int i = 0; i < a2; i++)
        {
            Merged.push_back(A2[i]);
            /* code */
        }

        std::sort(Merged.begin(),Merged.end());


        cout<<"The final merged arrray is as follows"<<endl;
        
        for (int i = 0; i < size; i++)
        {
            cout<<Merged[i]<<" ";
            /* code */
        }

        cout<<endl<<endl;
        
        
    }
};

int main()
{
    vector<int> A1 = {1,2,3,4,4,4,5,5,6,2,1,0};
    vector<int> A2 = {1,1,1,2,3,4,5,5,5,6,6,7,8};

    Solution s;
    s.Merge(A1,A1.size(),A2,A2.size());
}