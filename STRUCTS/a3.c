# include<stdio.h>
# include<malloc.h>


typedef struct Book
{
    int a;
    int b;
}bk;

void PrintDate(bk b)
{
    printf("a = %d || b = %d\n\n",b.a,b.b);
}

bk InputParams()
{
    bk bb;
    printf("Enter a \n\n");
    scanf("%d",&bb.a);
    printf("Enter b \n\n");
    scanf("%d",&bb.b);

    return bb;
}

int main()
{
    bk b1;
    b1 = InputParams();
    PrintDate(b1);

    //Now we will ahve the following
    //Input date and the print date fucntions


    //The saoperatiion of the functions

}