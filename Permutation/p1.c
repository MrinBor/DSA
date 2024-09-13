#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Permate(char *a, int l, int r)
{
    if (l == r)
    {
        printf("%s\n", a);
    }  
    else
    {
        for (int i = l; i <= r; i++)
        { // Iterate from l to r inclusive
            swap((a + l), (a + i));
            Permate(a, l + 1, r);
            swap((a + l), (a + i)); // backtrack
        }
    }
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    Permate(str, 0, n - 1);
    return 0;
}
