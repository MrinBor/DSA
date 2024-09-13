#include <stdio.h>

// Function to return the minimum of two numbers
int min(int x, int y)
{
    return (x < y) ? x : y;
}

// Function to return the maximum of two numbers
int max(int x, int y)
{
    return (x > y) ? x : y;
}

// Function to calculate maximum profit
int Profit(int arr[], int a)
{
    int mini = arr[0];
    int profit = 0;
    int cost = 0;

    for (int i = 0; i < a; i++)
    { 
        cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, arr[i]);
    }

    return profit;
}

int main()
{
    int a;
    printf("Enter the number of days: ");
    scanf("%d", &a);

    int arr[a];
    printf("Enter the prices: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_profit = Profit(arr, a);
    printf("The maximum profit is: %d\n", max_profit);

    return 0;
}
