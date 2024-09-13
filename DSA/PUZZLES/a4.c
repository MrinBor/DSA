# include<stdio.h>


void Swap(int *a,int *b)
{
    *a ^= *b ^=*a ^= *b;
}


int main()
{
    int a  = 1;
    int b = 2;
    a^=b^=a^=b;

    printf("a = %d , b = %d",a,b);

    Swap(&a,&b);
    printf("\n\na = %d , b = %d",a,b);

}