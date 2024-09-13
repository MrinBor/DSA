# include<iostream>
# include<malloc.h>
# include<set>
# include<map>
# include<vector>
# include<algorithm>
using namespace std;

class Solution
{
    public:

    int removeDumplicate(vector<int> Arr,int val)
    {
        int size = Arr.size();

        int count = 0;

        for (int i = 0; i < size; i++)
        {
            if(Arr[i] == val)
            {
                count++;
            }
            /* code */
        }

        return size - count;


        
        

    }

};

int main()
{
    Solution s;
    vector<int> Arr =  {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int val = 5;

   int elem = s.removeDumplicate(Arr,val);

   cout<<"Element -->> "<<elem<<endl;
}