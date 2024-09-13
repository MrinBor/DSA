# include<stdio.h>

int main()
{
    char *str[2] = {"Even","Odd"};

    int n;

    printf("Enter a number \n");
    scanf("%d",&n);

    printf("%s",str[n&1]);
}