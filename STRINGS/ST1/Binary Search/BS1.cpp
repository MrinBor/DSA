# include<iostream>
# include<sstream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size - 1;

    int mid= (start+end)/2;
    while (start<end)
    {

        int mid = (start+(end-start))/2;
        if(arr[mid] == key)
        {
            return mid;
        }

        else if(arr[mid]>key)
        {
            end = mid-1;
        }

        else 
        {
            start = mid+1;
        }

        /* code */
    }

    return -1;
    
}

int main()
{

}