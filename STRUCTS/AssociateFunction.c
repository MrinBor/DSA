# include<stdio.h>


typedef struct Point
{
    int x;
    int y;
}P;

P addition(P p1,P p2)
{
    P result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    return result;
}

void Increment(P *p)
{
    (*p).x++;
    (*p).y++;
}

int main()
{
    P p1 = {1,2};
    P p2 = {3,4};

    P res = addition(p1,p2);
    printf("\n\n%d || %d",res.x,res.y);


    Increment(&p1);
    printf("\n\n%d || %d", p1.x, p1.y);
}

// Incrementing a particular field
//  We will have the following