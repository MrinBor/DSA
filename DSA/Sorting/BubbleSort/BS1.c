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
    printf("\nEnter the size of the array \n");
    scanf("%d",&a);

    int Arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the element number %d\n",(i+1));
        scanf("%d",&Arr[i]);
        /* code */
    }

    int flag = 1;
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                flag = 0;
            }
            /* code */
        }
        
        /* code */
    }

    if(flag)
    {
        printf("\nThe given array is already sorted : ) Have Fun\n");
    }
    else
    {
        printf("\nThe given array is not sorted yet : | \n");
        }
}