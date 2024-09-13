# include<stdio.h>
# include<malloc.h>


void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void selection_sort(int a,int arr[])
{
    int sm=arr[0];
    int k=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if (arr[j] < sm)
            {
                sm = arr[i];
            }
            
        }

  

        swap(&arr[k],&sm);
        k++;



    }
}

int main()
{
    int arr[5]={3,1,4,2,0};
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        /* code */
    }

    printf("\n\n");
    
    selection_sort(5,arr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        /* code */
    }
}