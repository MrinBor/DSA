#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the element number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf("The element number %d --> %d\n", (i + 1), arr[i]);
    }

    int maxElement = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    int FreqArr[maxElement + 1];
    for (int i = 0; i <= maxElement; i++)
    {
        FreqArr[i] = 0;
    }

    for (int i = 0; i < a; i++)
    {
        FreqArr[arr[i]]++;
    }

    printf("\nFrequency of elements:\n");
    for (int i = 0; i <= maxElement; i++)
    {
        if (FreqArr[i] > 0)
        {
            printf("Element %d appears %d times\n", i, FreqArr[i]);
        }
    }

    return 0;
}
