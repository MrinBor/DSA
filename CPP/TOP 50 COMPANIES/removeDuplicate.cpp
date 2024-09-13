# include<iostream>
# include<set>
# include<map>
# include<vector>
using namespace std;

//Now we will have  the following
class Solution
{
    public:
    void removeDuplicates(vector<int> Arr)
    {
        set<int> A1;
        int count = 0;
        for(int i = 0;i<Arr.size();i++)
        {
            A1.insert(Arr[i]);
        }

        for (int i = 0; i < Arr.size(); i++)
        {
            Arr[i] = 0;
            /* code */
        }

        for (int i = 0; i < A1.size(); i++)
        {
            Arr[i] = A1[i];
            count++;
            /* code */
        }

        return count;
        
        
    }


};

int main()
{

}