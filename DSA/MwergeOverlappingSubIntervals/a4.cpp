# include<iostream>
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
    scanf("%d",&a);
    int Arr[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("\nEnter the element number (%d %d)\n",i,j);
            scanf("%d",&Arr[i][j]);
            /* code */
        }
        
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            Arr[j][a-i-1] = Arr[i][j];
            /* code */
        }
        
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            /* code */
            printf("%d",Arr[i][j]);
        }

        cout<<endl;
        
        /* code */
    }
    
    
    
}