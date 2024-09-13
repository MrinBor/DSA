# include<iostream>
# include<set>
# include<map>
# include<algorithm>
# include<vector>
using namespace std;

int removeDuplicate(vector<int> Nums)
{
    int size = Nums.size();
    if(size == 0) return 0;

    int index = 1;

    for (int i = 1; i < size; i++)
    {
        if(nums[i] != nums[i-1])
        {
            nums[index] = nums[i];
            index++;
        }
        /* code */
    }

    return index;
    
}

int main()
{

}