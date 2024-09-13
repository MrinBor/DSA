# include<stdio.h>

int main()
{
    int i = 0, j =0;

    for (int i = 1; i <4; i++)
    {
        if(i%2 == 1)
        {
            j = j+1;
        }

        else
        {
            j--;
            printf("%d\n",j);
            continue;
        }
        printf("\n%d",j);
        /* code */
    }
    
}