# include<stdio.h>
# include<vector>

class Solution
{
    public:
    vector<vector<int>> Merge(vector<vector<int>> & intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(),itervals.end());

        int i = 0;

        while (i<n)
        {
            int start = intervals[i][0];
            int end   = intervals[i][1];

            while (i<n && end>=intervals[i][0])
            {
                end = max(end,intervals[i][0]);
                i+=1;
                /* code */
            }
            
            /* code */
        }
        
    }

}

int main()
{

}