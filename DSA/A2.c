# include<stdio.h>
# include<malloc.h>

void Swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a;
    printf("Enter the size of the 2D Matrix\n");
    scanf("%d",&a);

    int Arr[a][a];

    for(int i = 0 ;i< a;i++)
    {
        for (int j  = 0; j < a; j++)
        {
            printf("\nEnter the element number (%d , %d)\n",i,j);
            scanf("%d",&Arr[i][j]);
            /* code */
        }
        
    }


    printf("\nThe array before swapping is as follows\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ",Arr[i][j]);
            /* code */
        }
        printf("\n");
        
        /* code */
    }
    


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            Arr[j][a-i-1] = Arr[i][j];
            // j , a-i - 1 == i , j
            // j , a- i - 1
            // j , a i 1
            /* code */
        }
        
        /* code */
    }

    printf("\nThe array after swapping is as follows\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", Arr[i][j]);
            /* code */
        }
        printf("\n");

        /* code */
    }
}