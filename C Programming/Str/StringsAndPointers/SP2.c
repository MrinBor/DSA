# include<stdio.h>
# include<string.h>
# define MAX 20

int main()
{
    char str[MAX];
    fgets(str,MAX,stdin);
    char *ptr = str;

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }

    return 0;
}