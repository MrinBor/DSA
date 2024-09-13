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
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data = Arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < a; i++)
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
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
}

int main()
{
    int Arr[5] = {1,2,3,4,5};
    Insert(5,Arr);

    Display(first);
}