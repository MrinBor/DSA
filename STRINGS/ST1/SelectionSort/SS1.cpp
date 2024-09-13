#include <iostream>
#include <vector>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(vector<int> &Arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[j] < Arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        Swap(&Arr[minIndex], &Arr[i]);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> Arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    // Perform selection sort
    selectionSort(Arr, n);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}
