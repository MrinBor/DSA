# include<iostream>
# include<vector>
using namespace std;

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    scanf("%d",&a);

    vector<vector<int>> Arr(a, vector<int>(a));

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("\nEnter the element number (%d,%d) \n",i,j);
            scanf("%d",&Arr[i][j]);
            /* code */
        }
        
        /* code */
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


    //The rotate functionality

    for (int i = 0; i < a; i++)
    {
        for(int j=i;j<a;j++)
        {
            Swap(&Arr[i][j],&Arr[j][i]);
        }
        /* code */
    }


    for (int i = 0; i < a; i++)
    {
        reverse(Arr[i].begin(),Arr[i].end());
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