# include<stdio.h>
# include<malloc.h>

void Swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


vector<vector<int>> MergeOverLapping(vector<vector<int>> & Arr)
{
    int n =  Arr.size();

    sort(Arr.begin(),Arr.end());

    vector<vector<int>> Ans;

    for (int i = 0; i < n; i++)
    {
        int start = Arr[i][0];
        int end   = Arr[i][1];

        if(!Ans.empty() && end <=  Ans.back()[1])
        {
            continue;
        }

        for (int j = i+1; j < n; i++)
        {
            if(Arr[j][0] <= end)
            {
                end = max(end,Arr[j][1]);
            }

            else
            {
                break;
                //The previous element will no more overlapp

            }
            /* code */
        }
        Ans.push_back({start,end});
        

        /* code */
    }

    return Ans;
    
}

int main()
{


}













// Merge the overlappiinf sub intervals



//A pproach them into together 

// Sort the number of pairs

// Sor tht efirst element of each of the rows in a sorted order

// Iterate 
// Then go to the next interval 
// If the first element is before the last element 

// In order to accumulate 2, 4 we will be having 1, 4

// accumulation not overlappin gno adding in the merged or overlapped array 


// We will be having the following

// Last element is over 4 

// 8 , 9 is also not there 

// Start doing the same step

//Stand and look at the other elements 


// Silently make the swaps of the element 

// next go to 15 18 
//Merging of the overlapinng sub Intervals



// Sub intervals merged into 1
// Find the minimum intervals to be implemented over her e

// Now we will ahave the following

// Why not take 1 to 18
// We will be hhaving a lot of empty places

// miniimum possible intervals we can club them into
// We cna do it in 3 ways
// Merge them and return the no of overlapiingintervals
