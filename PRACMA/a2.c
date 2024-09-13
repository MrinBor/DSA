# include<stdio.h>
# include<malloc.h>






void Selection_Sort(int a,int arr[a])
{
    for (int i = 0; i < a; i++)
    {
        int index = i;

        for (int j = a+1; j < a; i++)
        {
            if(arr[index]>arr[i])
            {
                index=i;
            }

            swap((arr))
            /* code */
        }
        
        

        /* code */
    }
}











void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void Bubble_Sort(int a,int arr[a])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                Swap(&arr[j],&arr[j+1]);
            }
            /* code */
        }
        
        /* code */
    }
    
}

int main()
{
    int arr[6]={1,4,2,5,3,8};
    for (int i = 0; i < 6; i++)
    {
        printf(" %d ",arr[i]);
        /* code */
    }

    printf("\n\n");
    Bubble_Sort(6,arr);

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", arr[i]);
        /* code */
    }
}