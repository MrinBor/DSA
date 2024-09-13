# include<stdio.h>
# include<malloc.h>


//A Heap Insert delte

// Heap Sort 
// Heapify

// Priority Queues


/**
 * @brief 
 * 
 * A heap is a complete binary Tree
 * 
 * 
 * 
 * @return int 
 */

void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void Heapify(int arr[] ,int a)
{
    for(int i=0;i<a;i++)
    {
        int left=2*i;
        int right=2*i+1;
        if(arr[i]>arr[left] && (left<a && right<a))
        {
            Swap(&arr[i],&arr[left]);

            if (arr[i] > arr[right] && (left < a && right < a))
            {
                Swap(&arr[i],&arr[left]);
            }
        }

    }
}

void Insert_Node(int arr[],int n)
{
    int temp,i=n;
    temp=arr[n];

    while(i>n && temp<arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        /* code */
    }
    printf("\n");
}


void Insert(int arr[],int n)
{
    int temp,i=n;

    temp=arr[n];
    while(i>1 && temp>arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }

    arr[i]=temp;

    printf("\n");

    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
        /* code */
    }
    printf("\n");
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
    printf("\n");

    for (int i = 2; i <= 10; i++)
    {
        Insert_Node(arr, i);
        /* code */
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        /* code */
    }
    printf("\n");
}