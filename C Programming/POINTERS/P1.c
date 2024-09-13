# include<stdio.h>
# include<malloc.h>

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    printf("\nEnter two integers\n");
    scanf("%d %d",&a,&b);
    printf("Before swap %d %d",a,b);
    Swap(&a,&b);
    printf("\n\nAfter  swap %d %d", a, b);
}

//The pointers
//We will have the following
