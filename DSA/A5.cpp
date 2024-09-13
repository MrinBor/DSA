# include<stdio.h>
# include<malloc.h>

//Swapping of the val;ues
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
    printf("\nEnter the size of the element \n");
    scanf("%d",&a);

    int Arr[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("\nEnter the element  number (%d %d)\n",i,j);
            scanf("%d",&arr[i][j]);
            /* code */
        }
        
        /* code */
    }

    printf("\nDisplaying the array matrix\n");

    for (int  i = 0; i < a; i++)
    {
        for (int j = 0; j < a; i++)
        {
            printf("%d",Arr[i][j]);
            /* code */
        }
        printf("\n");
        
        /* code */
    }


    for(int i= 0 ;i<a-1;i++)
    {
        for (int j = i+1; j < a; i++)
        {
            Swap(&Arr[i][j],&Arr[j][i]);
            /* code */
        }
        
    }

    for (int i = 0; i < a; i++)
    {
        std::reverse(arr[i], arr[i] + a); // Use standard reverse for each row
    }
    

    for(int i = 0;i<a-1;i++)
    {
        for (int j = i+1; j < a; j++)
        {
            Swap(&Arr[i][j],&Arr[j][i]);
        }
        
    }

    

    printf("\nDisplaying the array matrix\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; i++)
        {
            printf("%d", Arr[i][j]);
            /* code */
        }
        printf("\n");

        /* code */
    }
}