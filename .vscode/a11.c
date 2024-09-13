# include<stdio.h>
# include<malloc.h>

struct stack 
{
    int top;
    int size;
    int data[100];

};

void insert(struct stack *st,int a)
{
    if(st->top==-1)
    {
        printf("Stack Underflow \n");
    }
    else
    {
        st->data[st->top];
        st->top++;
    }

    printf("\n%d \n",st->data[st->top]);
}
int main()
{
    int a;
    struct stack st;
    printf("Enter the size of the stack \n\n");
    scanf("%d",&st.size);
    st.top=-1;

    for (int i = 0; i < st.size; i++)
    {
        insert(&st,i);
        /* code */
    }


    
    



}