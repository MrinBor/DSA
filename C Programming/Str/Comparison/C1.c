#include <stdio.h>
#include <string.h>

int main()
{
    char *f1 = "Geeks";
    char *f2 = "Geeks";

    if (strcmp(f1, f2) == 0)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are not equal\n");
    }

    return 0;
}
