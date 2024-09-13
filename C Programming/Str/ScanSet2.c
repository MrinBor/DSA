# include<stdio.h>
# include<string.h>
# define MAX 20

int main()
{
    char str[MAX];
    scanf("%[^\n]",str);
    printf("\nThe string entereed is = %s\n",str);
}