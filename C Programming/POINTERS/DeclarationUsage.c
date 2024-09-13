# include<stdio.h>

//Connection and reference between the variables
//We will have the following

//Say we have the following operations

int main()
{
    int a = 100;
    int *p;
    p = &a;

    printf("%d",*p);

    //Now we will have the following

    printf("\n%p",&a);
    printf("\n%p",p);
    printf("\n%d",a);
    printf("\n%d",*p);

    //Data type and then the variable name is required
}