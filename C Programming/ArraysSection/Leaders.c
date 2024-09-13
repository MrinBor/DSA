
#include <stdio.h>
#include <malloc.h>

int main()
{
    int a;
    scanf("%d",&a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the element no %d :: ",(i+1));
        scanf("%d",&arr[i]);
        /* code */
    }

    printf("\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
    printf("\n");

    int Leader[a];

    int counter = 0;
    int max = 0;
    for(int i=a;i>=0;i--)
    {
        max = arr[i];
        if(i == a)
        {
            Leader[counter] = arr[i];
            counter++;
        }
        else{
            if(arr[i-1]>max)
            {
                Leader[counter] = arr[i-1];
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ",Leader[i]);
        /* code */
    }
    


}