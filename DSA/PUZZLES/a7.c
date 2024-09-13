//power of 2

# include<stdio.h>

int isPow2(int n)
{
    return (n&&(!(n&(n-1))));
}

int main()
{
    if(isPow2(16))
    {
        printf("\nPower of Two\n");
    }
}