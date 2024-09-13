/**
 *
 * A string in c programming sequencd
 *
 *
 * A String in C programming is a sequence of characters terminated with a null character ‘\0’. 
 * The C String is stored as an array of characters. The difference between a character array
 *  and a C string is that the string in C is terminated with a unique character ‘\0’.
 * 
 * 
 * C STRING DECLARATION
 */

# include<stdio.h>
# include<string.h>



int main()
{
    //Say we will have the following
    char str [] = "Hello World";

    printf("%s",str);

    //Size for string th es tring must always be greater thann n
    //or it should be (n+1)  Greater than  the length of the string

    //Say we will have
    char str1[] = "TOMCAT";
    printf("\n%s\n",str1);

    printf("\nThe size of the string is = %d\n",strlen(str1));



    //Declaration and printing 
    char str3[50];

    printf("\nEnter a string\n");
    scanf("%s",str3);
    printf("%s",str3);



}

/**
 * @brief
 * Here, the string is read only till the whitespace is encountered.
 * 
 * The string is read only till the white spaces are encountered 
 *
 */