# include<stdio.h>
# include<malloc.h>

int Find_Sum(int *arr,int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }

    return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    int res = Find_Sum(arr,a);
    printf("The sum iof the array %d",res);

    
}