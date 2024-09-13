#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1; // Correct initialization of end

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Correct calculation of mid

        // Check if key is present at mid
        if (arr[mid] == key)
        {
            return mid; // Return the index where key is found
        }

        // If key is smaller than mid, search in the left half
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            // If key is larger than mid, search in the right half
            start = mid + 1;
        }
    }

    // Return -1 if the key is not found
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size; // Using cin for input

    int Arr[size];

    // Input array elements
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << (i + 1) << ": ";
        cin >> Arr[i];
    }

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    // Call binary search function
    int index = binarySearch(Arr, size, key);

    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
