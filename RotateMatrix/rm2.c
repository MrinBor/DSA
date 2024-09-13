# include<stdio.h>

void Input(int a,int arr[][a])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter the element number (%d,%d)             :      ",i,j);
            scanf("%d",&arr[i][j]);
            /* code */
        }
        
        /* code */
    }
    
}

void Display(int a , int arr[][a])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
             printf("%d", arr[i][j]);
            /* code */
        }
        printf("\n");

        /* code */
    }
}

void Reverse_Arr(int a,int arr[][a])
{
    int temp[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            temp[i][j-1-i] = arr[i][j];
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d", temp[i][j]);
            /* code */
        }
        printf("\n");

        /* code */
    }
}





int main()
{
    int a;
    scanf("%d",&a);

    int arr[a][a];
    Input(a,arr);
    Display(a,arr);
    Reverse_Arr(a,arr);


}

// Now we will have
