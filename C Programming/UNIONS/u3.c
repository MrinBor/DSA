# include<stdio.h>

union Point
{
    int x;
    int y;
    double z;
    double w;
};

struct Point1
{
    int x;
    int y;
    double z;
    double w;
};


int main()
{
    union Point p1;
    struct Point1 p2;
    p1.x = 1;
    p1.y = 2;

    p2.x = 3;
    p2.y = 4;

    printf("Union Point-->>%d\n",p1.x);
    printf("Struct Point-->%d\n",p2.x);
    printf("\n%d\n",sizeof(p1));
    printf("\n%d\n",sizeof(p2));
    

}


/**
 * @brief 
 * Struct is a block of memory
 * 
 * Unions 
 * They take the largest of these fieled
 * 
 * One of the data members at any point of time
 * 
 * 
 */
// The printing of the hello value
