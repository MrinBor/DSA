# include<stdio.h>
# include<string.h>


int main()
{
    char* s1 = "GEEKS";
    char* s2 = "GEEKS";

    int res  = strcmp(s1,s2);

    printf("The sresult is -->> %d",res);

    if(!res)
    {
        printf("\n\n\nThe strings are equal\n");
    }
}