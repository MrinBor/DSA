//Lucas Sequence
// 0 2 1 1 

# include<stdio.h>
# include<stdlib.h>

int LucasSeq(int a)
{
    if( a == 0)
    {
        return 2;
    }
    if( a == 1)
    {
        return 1;
    }
    else
    {
        return LucasSeq(a-1) + LucasSeq(a-2);
    }
}


int main()
{
    int a;
    scanf("%d",&a);
    printf("%d ",LucasSeq(a));
    
}