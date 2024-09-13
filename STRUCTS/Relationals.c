# include<stdio.h>

//Two variables of type struct

typedef struct Point
{
    int x;
    int y;
}P;

typedef struct Employee
{
    char Name[20];
    int age;
    int Salary;
}Emp;


int PointCheck(P p1,P p2)
{
    if((p1.x == p2.x) && (p1.y == p2.y))
    {
        return 1;
    }

    return 0;
}


int main()
{
    P p1 ={1,2},p2={1,2};





    if(PointCheck(p1,p2))
    {
        printf("\nThe points are equal\n");
    }
    else
    {
        printf("\nThe points are not equal\n");
    }

    Emp e1={"Mrinmoy Bordoloi",21,450000};
    printf("\n\n%s",e1.Name);




}

// if(p1.x>p2.x)
// {
//     printf("\np1 Is greater than p2\n");
// }
// else
// {
//     printf("\np2 Is greater than p1\n");
// }

// Comparison between p1 and p2
// Associate some code with the conditions
// Fields to be used in the condition
// The coparison between two struct fields

// If we are to compare between fields
// This will not work
// Functions related to it
// Operator Overloading and so forth
// Filed of comparison must be specified to do so
  