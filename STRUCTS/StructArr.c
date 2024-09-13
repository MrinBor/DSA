# include<stdio.h>


typedef struct Point
{
    int x;
    int y;
}Point;







int main()
{
    Point Points_Arr[5];

    int a;
    printf("Enter the number of Coordinates \n");
    scanf("%d",&a);


    for (int i = 0; i < a; i++)
    {
        printf("Enter the coordinate no (%d) \n",(i+1));
        scanf("%d %d",&Points_Arr[i].x,&Points_Arr[i].y);
    }

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the coordinate no (%d) ", (i + 1));
        printf("%d %d\n\n", Points_Arr[i].x, Points_Arr[i].y);
    }
}