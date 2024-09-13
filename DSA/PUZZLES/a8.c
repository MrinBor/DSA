//Copy string
#include <stdio.h>

// Function to copy string from s2 to s1
void StrCpy(char *s1, const char *s2)
{
    while (*s1++ = *s2++)
        ; // Copy each character including null terminator
}

int main()
{
    char source[] = "Hello, World!"; // Source string
    char destination[50];            // Destination array, should be large enough to hold the source string

    // Copy the source string to the destination
    StrCpy(destination, source);

    // Print both strings
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}

// Being copied executed or incremented first
