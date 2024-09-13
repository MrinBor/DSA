# include<stdio.h>
# include<malloc.h>

void InsetionSort(int arr[],int a)
{
    for (int i = 1; i < a; i++)
    {
        int j = i-1;
        int x = arr[i];

        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = x;
        /* code */
    }
    

}

int main()
{
    int a;
    printf("\nEnter the size of the ARRAY\n");
    scanf("%d",&a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the element number %d\n" ,(i+1));
        scanf("%d",&arr[i]);
        /* code */
    }

    printf("\nDISPLAYING THE ARRAY\n");
    InsetionSort(arr,a);

    for (int i = 0; i < a; i++)
    {
        printf("\nThe element number %d is %d \n",(i+1),arr[i]);
        /* code */
    }
    

    InsetionSort(arr,a);

    for (int i = 0; i < a; i++)
    {
        printf("\nThe element number %d is %d \n", (i + 1), arr[i]);
        /* code */
    }
}