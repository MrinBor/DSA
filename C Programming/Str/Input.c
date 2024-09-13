# include<stdio.h>
# include<string.h>
# define MAX 50


int main()
{
    char str[MAX];

    fgets(str,MAX,stdin);

    printf("\nThe string entered by you is ");
    puts(str);

    return 0;
}