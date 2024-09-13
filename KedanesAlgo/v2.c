# include<stdio.h>

long long maxSubArraySum(int arr[],int n)
{
    long long sum = 0;
    long long maxi = LONG_MIN;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

        if(sum>maxi)
        {
            maxi = sum;
        }

        if(sum<0)
        {
            sum = 0;
        }
        /* code */
    }

    return maxi;
    
}

int main()
{
    int a;
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        /* code */
    }
    
}