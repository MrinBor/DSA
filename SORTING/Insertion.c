# include<stdio.h>
# include<malloc.h>

void InsertionSort(int arr[],int a)
{
    for (int i = 1; i < a; i++)
    {
        int j= i-1;
        int x= arr[i];

        while(j>-1 && arr[j]>x)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = x;
        /* code */
    }



    for (int i = 1; i < a; i++)
    {
        int j = i-1;
        int x = arr[i];
        while(j>-1 && arr[j])
        {
            arr[j+1] = arr[j];
            j -- ;
        }

        arr[j+1] = x;
        /* code */
    }
    
    
}








int main()
{
    int a;
    printf("Enter the size of the array \n");
    scanf("%d",&a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the element number %d \n",i+1);
        scanf("%d",&arr[i]);
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        printf("Element %d -> %d ",(i+1),arr[i]);
        /* code */
    }

    InsertionSort(arr,a);
    printf("\n###############################\nAfter Sorting\n\n");

    for (int i = 0; i < a; i++)
    {
        printf("Element %d -> %d ", (i + 1), arr[i]);
        /* code */
    }
}