# include<stdio.h>
# include<malloc.h>


int Kedane(int arr[],int a)
{
    int sum = 0;
    int max_int = -12344;

    for (int i = 0; i < a; i++)
    {
        sum+=arr[i];

        if(sum>max_int)
        {
            max_int=sum;
        }

        if(sum<0)
        {
            sum  = 0;
        }
        /* code */
    }

    return sum;
    
}

int main()
{
    int a;
    scanf("%d",&a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the value of (%d) \n",(i+1));
        scanf("%d",&arr[i]);
        /* code */
    }

    int a1 = Kedane(arr,a);
    printf("\n\nThe max Sum -->> (%d)\n",a1);

    
    
}


