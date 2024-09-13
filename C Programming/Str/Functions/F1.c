# include<stdio.h>
# include<string.h>


int main()
{
    //The length of the string using the functions
    //The Length using strlen
    char str[] = "Hello";

    int length = strlen(str);
    printf("The size of the String is -->> %d \n",length);


    //The length of the string will be 5

    return 0;

}

/**
 * 
 * 
 * @brief
 * 
 * 
 * strlen() does not count the NULL character ‘\0’.
The time complexity of strlen() is O(n), where n is the number of characters in the string.
Its return type is size_t ( which is generally unsigned int ).


Syntax of C strlen()
The syntax of strlen() function in C is as follows:

size_t strlen(const char* str);
Parameters


 *
 */