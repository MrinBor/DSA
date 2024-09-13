# include<stdio.h>
# include<malloc.h>
# define MAX 20

int main()
{
    char str[MAX];
    fgets(str,MAX,stdin);
    puts(str);

    return 0;
}