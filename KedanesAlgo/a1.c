#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf("\n:%d:", arr[i]);
    }

    int max_sum = -1234523; // Initialize to a very small value
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }

    printf("\nMaximum subarray sum is: %d\n", max_sum);

    return 0;
}
//n ^2 -->> The optimal solution
/**
 * @brief 
 * Intution behind it
 * 
 * 
 */