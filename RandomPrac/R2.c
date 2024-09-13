# include<stdio.h>
# include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *S;
};

void Create(struct stack *st)
{
    printf("Enter the size of the stack\n");
    scanf("%d",&st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void Display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d\n",st.S[i]);
    }
}
/// @brief 
void Push(struct stack *st,int x)
{
    if(st->top == st->size-1)
    {
        printf("\nStack Overflow\n");
    }

    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}


int main()
{
    struct stack  st;
    Create(&st);

    Push(&st, 1);
    Push(&st, 2);
    Push(&st, 3);
    Push(&st, 4);

    Display(st);

    return 0;
}