#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<vector<int>> MergeOverLapping(vector<vector<int>> &Arr)
{
    int n = Arr.size();

    // Sort intervals based on the starting times
    sort(Arr.begin(), Arr.end());

//Sorting the strings 
//

    vector<vector<int>> Ans;

    for (int i = 0; i < n; i++)
    {
        int start = Arr[i][0];
        // Start of thhe elemen is as follows 
    
        int end = Arr[i][1];
        // The end element will be having the elements

        
        // If the current interval is completely within the last interval in Ans, skip it
        if (!Ans.empty() && end <= Ans.back()[1])
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (Arr[j][0] <= end)
            {
                // Overlapping interval, extend the end time
                end = max(end, Arr[j][1]);
            }
            else
            {
                // No overlap, break out of the loop
                break;
            }
        }

        // Add the merged interval to the answer
        Ans.push_back({start, end});
    }

    return Ans;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> mergedIntervals = MergeOverLapping(intervals);

    cout << "Merged intervals: ";
    for (auto interval : mergedIntervals)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
