# include<stdio.h>
# include<malloc.h>

void CalcAvg(int *arr,int size,int *Avg)
{
    *Avg = 0;
    for (int i = 0; i < size; i++)
    {
        *Avg+=arr[i];
        /* code */
    }
    *Avg = *Avg/size;

    
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

    int Average;
    CalcAvg(arr,a,&Average);
    printf("\nThe average -> %d\n",Average);
    
}