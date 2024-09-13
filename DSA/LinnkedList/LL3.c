# include<stdio.h>
# include<malloc.h>

struct Node
{
    int data;
    struct Node *next;
}*first;


void Insert(int a,int Arr[])
{
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = Arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i<a; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = Arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
        /* code */
    }
    
}

void Display(struct Node *p)
{
    if(p!=NULL)
    {
        printf(" %d ",p->data);
        Display(p->next);
    }
}

int Count(struct Node *p)
{
    int x = 0;
    if(p)
    {
        x = Count(p->next);
        return x+1;
    }
    else
    {
        return x; 
    }
}

int Count_Ver_2(struct Node *p)
{
    int x = 0;
    while(p!=NULL)
    {
        x++;
        p = p->next;
    }

    return x;
}

int Sum(struct Node *p)
{
    if(p)
    {
        return Sum(p->next) + p->data;
    }
    else
    {
        return 0;
    }
}

int Sum_Ver_2(struct Node *p)
{
    int sum = 0;
    while(p!= NULL)
    {
        sum+=p->data;
        p = p->next;
    }

    return sum;
}


int Find_Max(struct Node *p)
{
    int m = -32768;

    while (p)
    {
        if(p->data>m)
        {
            m = p->data;
        }
        p = p->next;
    }

    return m;
    
}

//The concept of transposition and move to head


int main()
{
    int Arr[5] = {5,4,3,2,1};

    Insert(5,Arr);
    Display(first);

    printf("\nNo of elements:: %d ",Count(first));
    printf("\nNo of elements:: %d ", Count_Ver_2(first));
    printf("\nThe sum of all the elements -->> %d \n",Sum(first));
    printf("\nThe sum of all the elements -->> %d \n", Sum_Ver_2(first));
    printf("\nThe largest element in the LL is %d \n",Find_Max(first));
}