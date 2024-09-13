# include<stdio.h>
# include<malloc.h>

void MinMax(int *parr,int size,int *max,int *min)
{
    *max = parr[0];
    *min = parr[0];
    for (int i = 0; i < size; i++)
    {
        for (int i = 1; i < size; i++)
        {
            if(*max<parr[i])
            {
                *max = parr[i];
            }

            if(*min>parr[i])
            {
                *min = parr[i];
            }
            /* code */
        }
        
        /* code */
    }
    
}

int main()
{
    int a;
    scanf("%d",&a);

    int min,max;//The reference variables
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
    
    printf("\n\n");

    MinMax(arr,a,&max,&min);

    printf("\n\nMax->%d, Min->%d",max,min);


    
}