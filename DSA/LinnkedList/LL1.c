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
        printf("%d ",p->data);
        p = p->next;
    }
}

int main()
{
    int a;
    printf("Enter the size of the array \n");
    scanf("%d",&a);

    int Arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the element number %d \n",(i+1));
        scanf("%d",&Arr[i]);
        /* code */
    }

    Insert(a,Arr);
    printf("\n\n");
    Display(first);
    
}