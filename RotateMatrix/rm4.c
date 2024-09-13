#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Rotate90(int a, int arr[][a])
{
    // Step 1: Transpose the matrix
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        { // Corrected the inner loop to 'j++'
            swap(&arr[i][j], &arr[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < a; i++)
    {
        for (int j = 0, k = a - 1; j < k; j++, k--)
        {
            swap(&arr[i][j], &arr[i][k]);
        }
    }
}

void Display(int a, int arr[][a])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);

    int arr[a][a];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original Array:\n");
    Display(a, arr);

    Rotate90(a, arr);

    printf("Array after 90-degree rotation:\n");
    Display(a, arr);

    return 0;
}
