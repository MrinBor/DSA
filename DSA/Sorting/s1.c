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
    scanf("%d",&a);

    int Arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the element number %d \n",i+1);
        scanf("%d",&Arr[i]);
        /* code */
    }

    

    for (int i = 0; i < a-1 ; i++)
    {
        for (int j = 0; j < a-i-1 ; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                Swap(&Arr[j],&Arr[j+1]);
            }
            /* code */
        }
        
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        printf(" %d ",Arr[i]);
        /* code */
    }
    
    


    
}

//Help

// After parsing
// 1 4 2 5 8

// Swapping of the element
// Swap the adjacent elements

// Largest element will come to an end in each iterations
