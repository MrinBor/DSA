# include<stdio.h>

int findMax(int a,int b,int c)
{
    int max = a;
    (max<b) && (max = b);
    (max<c) && (max = c);

    return max;
}

int main()
{
    int res = findMax(1,2,111);
    printf("%d",res);
}