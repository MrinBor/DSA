# include<stdio.h>
# include<malloc.h>

int main()
{
    int a;
    scanf("%d",&a);

    int Arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the element number %d\n",(i+1));
        scanf("%d",&Arr[i]);
        /* code */
    }


    for (int i = 0; i < a; i++)
    {
        printf("\n\nThe element number %d is %d",(i+1),Arr[i]);
        /* code */
    }
    
    
}