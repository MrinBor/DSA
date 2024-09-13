# include<stdio.h>


int main()
{
    int a;
    scanf("%d",&a);

    int arr[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d",&arr[i][j]);
            /* code */
        }
        
        /* code */
    }

    printf("\n\n");
    for(int i=0;i<a;i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ",arr[i][j]);
            /* code */
        }
        printf("\n");
        
    }

    int temp[a][a];


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            temp[j][a-1-i] = arr[i] [j]; 
            // We will haev the following j , a-1-i
            /* code */
        }// [j,a-1-i]
        
        /* code */
    }

    printf("\n\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", temp[i][j]);
            /* code */
        }
        printf("\n");
    }
}


/**
 * @brief 
 * Clock Wise rotation by 90 Degrees
 * 
 */
















//The rotation of the matrix