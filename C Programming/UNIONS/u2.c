# include<stdio.h>
# include<string.h>

union Info
{
    char FirstName[15];
    int age;
};

int main()
{
    union Info myvar1;
    myvar1.age = 123;


    char Name[15];
    scanf("%s",&Name);

    printf("\nName -- ..  %s\n",Name);
    strcpy(myvar1.FirstName,Name);




    printf("\n%s\n",myvar1.FirstName);
}