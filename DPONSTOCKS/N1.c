# include<stdio.h>

int min(int x,int y)
{
    return (x>y)?y:x;
}

int max(int x,int y)
{
    return (x>y)?x:y;
}

int MaximizeProfit(int a,int arr[a])
{
    int mini = arr[0];
    int profit = 0;
    int cost = 0;

    for (int i = 0; i < a; i++)
    {
        cost = arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
        /* code */
    }

    return profit;
    
}

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the element number %d ",(i+1));
        scanf("%d",&arr[i]);
        /* code */
    }

    int res =  MaximizeProfit(a,arr);
    printf("\n%d\n",res);
}