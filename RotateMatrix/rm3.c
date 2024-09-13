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
            printf("Enter the element number [%d,%d]",i,j);
            scanf("%d",&arr[i][j]);
            /* code */
        }
        
        /* code */
    }


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ",arr[i][j]);
            /* code */
        }
        printf("\n");
        
        /* code */
    }


    //The reversal

    int temp[a][a];


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            temp[j][a-1-i]  = arr[i][j];
            /* code */
        }
        
        /* code */
    }


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", temp[i][j]);
            /* code */
        }
        printf("\n");
        /* code */
    }
    
    
    
    
}

