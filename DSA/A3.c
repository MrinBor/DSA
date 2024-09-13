# include<stdio.h>
# include<malloc.h>


void Swap(int *a,int *b)
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    scanf("Enter the size of the matrix\n");
    scanf("%d",&a);

    int Arr[a][a];

    printf("Enter the size of the element \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter the element number %d %d \n",i , j);
            scanf("%d",&Arr[i][j]);
            /* code */
        }
        /* code */
    }

    // Now we will have the following 
    //

    for (int i = 0; i < a-1; i++)
    {
        for (int j = i + 1; i < a; i++)
        {
            Swap(&arr[i][j],&Arr[j][i]);
            /* code */
        }
        
        /* code */
    }


    for (int i = 0; i < a; i++)
    {
        std::reverse(arr[i],arr[i]+a);
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        std::reverse(arr[i],arr[i] + a);
        //Reversing eacch of the rows
        //Of the given sub array
        //std::reverse(arr[i],arr[i]+a);
        /* code */
    }
    
    
    


    
}