# include<stdio.h>
# include<string.h>
# define MAX 50

int main()
{
    char str[MAX] = "Hello World";
    char *ptr = str;


    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }


    //fgets(str,MAX,stdin);


    return 0;
}