# include<iostream>
# include<vector>
using namespace std;

class Soluton
{
    public:
    vector<vector<int>> Merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();

        sort(intervals.begin(),intervals.end());
        //Sorting of the intervals
        //

        vector<vector<int>> Ans;
        //All possible emrge intervs;s

        int i = 0;


        while(i<n)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];


            while (i < n && end >= intervals[i][0])
            {
                end = max(end, intervals[i][0]);

                i += 1;
            }

            vector<int> temp;
            temp.push_back(start);
            temp.push_back(end);
            temp.push_back(temp);

        }

        return ans;
    } 
}


int main()
{

}



// The output array of intervals
// We will have the following
//Merged and two


//GOOD Way to vizualize
//Draw a number line and start  from the index 0