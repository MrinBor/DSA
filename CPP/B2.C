# include<stdio.h>
# include<malloc.h>



void onetonv(int n)
{
    if(n>=1)
    {
        printf("%d ",n);
        onetonv(n-1);
        printf("%d ",n);
    }
}


int main()
{
    int a;
    scanf("%d",&a);
    onetonv(a);
}