# include<stdio.h>



typedef struct Point
{
    int x;
    int y;
}Point;


void Display(Point p)
{
    printf("The points are represented as below \n\n");
    printf("\n%d | %d\n",p.x,p.y);
}

int main()
{
    Point p1;
    Display(p1);

    Point p2 = {1,2};
    Display(p2);

    Point p3 = {.x = 1,.y = 4};
    Display(p3);

    Point p4 = {.y=2,.x=1};
    Display(p4);


    



}