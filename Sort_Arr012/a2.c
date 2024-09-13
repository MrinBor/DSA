# include<stdio.h>


void sortArray(vector<int>& arr,int n)
{
    int low  = 0;
    int mid  = 0;
    int high = n-1;

    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            high++;
        }

        else if(arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }


    }
}


int main()
{

}

// The code descriptions
// We will have the following

//Optimal 
//The dutch Flag Algorithms
/**
* @brief 
* We will have th efollowing
* 
* low mid high
* // 0            to      low-1
* // low          to      mid-1
* // high+1       to      n-1
*/
//Now we will have the following