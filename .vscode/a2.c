#include <stdio.h>

int Merge(int a[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = a[p + i];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = a[q + j + 1];
    }

    int i = 0;
    int j = 0;

    for (int k = p; k <= r; k++)
    {
        if (i < n1 && (j >= n2 || left[i] <= right[j]))
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
    }

    return 0; // Return value indicating success
}

void Merge_Sort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        Merge_Sort(arr, p, q);
        Merge_Sort(arr, q + 1, r);
        Merge(arr, p, q, r);
    }
}

int main()
{
    int arr[6] = {4, 5, 3, 2, 1, 3};

    printf("\nOriginal Array:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    Merge_Sort(arr, 0, 5);

    printf("\nSorted Array:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}
