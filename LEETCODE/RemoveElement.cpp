# include<iostream>
# include<map>
# include<algorithm>
# include<vector>
using namespace std;

class Solution
{
    public:
    int countOccurances(vector<int> Arr,int key)
    {
        int count = 0;
        int a = Arr.size();
        for (int i = 0; i < a; i++)
        {
            if(Arr[i] == key)
            {
                count++;
            }
            /* code */
        }

        return Arr.size() - count;
        
    }


};

int main()
{
    Solution s;

    vector<int> A1 {1,2,5,4,5,5};
    int count;

    count =  s.countOccurances(A1,5);

    cout<<"The number of occurances is as follows "<<count<<endl;
}