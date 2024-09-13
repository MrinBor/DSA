# include<iostream>
# include<vector>
# include<map>
using namespace std;

class Solution
{
    public:

    void Merge(vector<int> &nums1, int m, vactor<int> &nums2,int n)
    {
        std::vector<int> finalMerged;

        int counter = 0;

        for (int i = 0; i < m; i++)
        {
            finalMerged.push_back(nums1[i]);
            /* code */
        }

        for (int  i = 0; i < n; i++)
        {
            finalMerged.push_back(nums2[i]);
            /* code */
        }

        std::sort(finalMerged.begin(),finalMerged.end());

        for (int i = 0; i < m+n; i++)
        {
            nums1[i] = finalMerged[i];
            /* code */
        }
        
        
        
    }

};
int main()
{
    
}