#include <stdio.h>
#include <malloc.h>
#define MAX 40

int main()
{
    char str[MAX];
    scanf("%[^\n]", str);
    printf("The string entered is: %s\n", str);

    return 0;
}
