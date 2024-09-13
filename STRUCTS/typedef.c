# include<stdio.h>
# include<malloc.h>



typedef struct Subjects
{
    int g1;
    int g2;
    int g3;
}Sub;  


void Printinf(Sub a1)
{
    printf("\n\n%d ",a1.g1);
}

int main()
{

    Sub a1;
    a1.g1 = 100;
    a1.g2 = 99;
    a1.g3 = 89;

    printf("%d %d %d", a1.g1, a1.g2, a1.g3);
    Printinf(a1);
}

// typedef is just a keyword for assigning another names
//  instead of naming the whole typedef
// Therefore we will have the following



/**
 * @brief 
 * The typedef struct 
 * We will have the following
 * And the reference is as follows
 * 
 */