# include<stdio.h>
# include<malloc.h>

typedef struct PrintData
{
    int a;
    int b;
}P;

int main()
{
    P p1;
    P p2;

    p1.a = 100;
    printf("The Data representation is as follows -->> %d",p1.a);
}