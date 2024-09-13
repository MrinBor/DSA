#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void Swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

vector<vector<int>> MergeOverlappingArrays(vector<vector<int> & Arr)
{
    int n =  Arr.size();
 
    sort(Arr.begin(), Arr.end());


    vector<vector<int>> Ans;

    for (int i = 0; i < n; i++)
    {
        int start  = Arr[i][0];
        int end    = Arr[i][1];

        if(!Ans.empty() && end <=  Ans.bacl()[1])
        {
            continue;
        }

        for (int j = i+1; i < count; i++)
        {
            /* code */
        }
        
        /* code */
    }
    


}