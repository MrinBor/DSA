# include<iostream>
# include<vector>
using namespace std;
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
    printf("Enter the size of the ARRAY \n");
    scanf("%d",&a);

    int Arr[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("\nEnter the element number (%d,%d)\n",i,j);
            scanf("%d",&Arr[i][j]);
            /* code */
        }
        
        /* code */
    }
    printf("\n\n");


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


    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            Swap(&Arr[i][j],&Arr[j][i]);
            /* code */
        }
        
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        std::reverse(Arr[i],Arr[i] + a);
        /* code */
    }
    

    printf("\n\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", Arr[i][j]);
            /* code */
        }
        printf("\n\n");

        /* code */
    }
}