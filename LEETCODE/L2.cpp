# include<iostream>
# include<map>
# include<vector>
using namespace std;

class Solution
{
    void Merge(vector<int> Arr1, int a1,vector<int> Arr2,int a2)
    {
        vector<int> MergedArr;

        for (int i = 0; i < a1; i++)
        {
            MergedArr.push_back(Arr1[i]);
            /* code */
        }

        for (int i = 0; i < a2; i++)
        {
            MergedArr.push_back(Arr2[i]);
            /* code */
        }


        std::sort(MergedArr.begin(),MergedArr.end());


        for (int i = 0; i < a1+a2; i++)
        {
            Arr1[i] = MergedArr[i];
            /* code */
        }
        

        /**
         * @brief 
         * The syntax for sorting is as follows
         * 
         * std::sort(vector_name.begin(),vector_name.end());
         * 
         */
        
        
    }
};

int main()
{
    
}
