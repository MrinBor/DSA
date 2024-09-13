# include<stdio.h>
# include<string.h>
# define MAX 40

void PrintString(char str[])
{
    printf("\nThe string entered by you is : %s \n",str);
}

int main()
{
    // char str[MAX];
    // scanf("%[^/n]",str);

    char str2[MAX] = "HelloWorld";
    PrintString(str2);


    return 0;
}