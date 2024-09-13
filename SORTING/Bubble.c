# include<stdio.h>
# include<malloc.h>

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
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

int SortCheck(int arr[],int n)
{
    int flag;
    for (int i = 0; i < n-1; i++)
    {
        flag = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = 1;
            }
            /* code */
        }
        
        /* code */
    }

    return flag;
    
}

int main()
{
    int a;
    printf("\nEnter the number of elements in the Array \n");
    scanf("%d",&a);

    int arr[a];

    for (int i = 0; i <a; i++)
    {
        printf("\nEnter the element number %d\n",(i+1));
        scanf("%d",&arr[i]);
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        printf("\n%d\n",arr[i]);
        /* code */
    }


    BubbleSort(arr,a);
    printf("\nAfter sorting\n");

    for (int i = 0; i < a; i++)
    {
        printf("\n%d\n", arr[i]);
        /* code */
    }


    int res = SortCheck(arr,a);
    if(res)
    {
        printf("\nThe arra is sorted already\n");
    }
    else
    {
        printf("\nThe array is not sorted\n");
    }
}