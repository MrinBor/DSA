# include<stdio.h>


int min(int x,int y)
{
    return (x<y)?x:y;//Return the smallest elemtn of them
}

int max(int x,int y)
{
    return (x>y)?x:y;
}

int Profit(int arr[],int a)
{
    int mini = arr[0];
    int profit = 0;
    int cost  = 0;

    for(int i=0;i<a;i++)
    {
        cost= arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }

    return profit;
}

int main()
{

}