# include<stdio.h>
# include<string.h>



int main()
{
    char s1[50] = "Hello";
    char s2[50] = " There";

    char d1[50];

    strcat(s1,s2);
    printf("%s",s1);

    char dest2[50];
    strncat(dest2,s1,2);
    printf("\nThe result -- >> %s\n",dest2);
}