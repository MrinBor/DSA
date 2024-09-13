#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50] = "Hello";
    char s2[50] = " There";

    char d1[50];

    strcat(s1, s2);   // Concatenates s2 to the end of s1
    printf("%s", s1); // Prints "Hello There"

    char dest2[50] = "";                      // Initialize dest2 as an empty string
    strncat(dest2, s1, 2);                    // Concatenates first 2 characters of s1 to dest2
    printf("\nThe result -- >> %s\n", dest2); // Should print "He"

    return 0;
}
