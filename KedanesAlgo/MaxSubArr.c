# include<stdio.h>


int main()
{
    int a;
    scanf("%d",&a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the value at the position (%d) ::",(i+1));
        scanf("%d",&arr[i]);
        /* code */
    }

    printf("\nThe values are represented as follows:-->>> ");
    for (int i = 0; i < a; i++)
    {
        printf(" %d ",arr[i]);
        /* code */

    }

    //The sum of maximum sub Array is as follows
    int maxSum = -122323;
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
                /* code */
            }
            if(sum>maxSum)
            {
                maxSum = sum;
            }
            
            /* code */
        }
        
        /* code */
    }

    printf("t\n\nThe value of the max Subarray (Sum ->>) %d",maxSum);
    
    
    
}