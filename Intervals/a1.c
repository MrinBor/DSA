# include<stdio.h>


int FinMin(int x,int y)
{
    return (x>y)?y:x;
}


int FinMax(int x,int y)
{
    return (x>y)?x:y;
}


int MaximiseTheProfit(int a,int arr[])
{
    int mini = arr[0];
    int profit = 0;
    int cost = 0;

    //Now we will have the following
    for (int i = 0; i < a; i++)
    {
        cost = arr[i] - mini;
        profit = FinMax(profit,cost);
        mini = FinMin(mini,arr[i]);
        /* code */
    }

    return profit;
    

}



int main()
{
    int a;
    printf("Enter the number of elements in the array \n\n");
    scanf("%d",&a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }

    int res = MaximiseTheProfit(a,arr);

    printf("\nThe profit after maximization is --->> %d\n",res);
    
}