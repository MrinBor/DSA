# include<stdio.h>
# include<stdlib.h>

int FindKey(int *arr,int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
        
        /* code */
    }

    return 0;
    
}
int main()
{
    int a,b;
    scanf("%d",&a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }

    printf("Enter a key to search for \n");
    scanf("%d",&b);

    if(FindKey(arr,a,b))
    {
        printf("The key found successfully\n");
    }
    else
    {
        printf("Key not found error\n");
    }




    
}