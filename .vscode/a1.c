#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int arr[], int p, int r)
{
    int pivot = arr[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Place the pivot element in its final sorted position
    swap(&arr[i + 1], &arr[r]);

    return i + 1;
}

void Quick_Sort(int arr[], int p, int r)
{
    if (p < r)
    {
        int index = Partition(arr, p, r);
        Quick_Sort(arr, p, index - 1);
        Quick_Sort(arr, index + 1, r);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    printf("\nOriginal Array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    Quick_Sort(arr, 0, 4);

    printf("\n\nSorted Array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
