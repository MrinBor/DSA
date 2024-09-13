# include<stdio.h>
# include<stdlib.h>

//The memory manmagemen tin the arrays
//Each element of the byte of element 

//The output as ptr[0] 1,2,3 and so onn


int Sum_Array(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
        /* code */
    }

    return sum;//Teh oyutput will be 6
    
}

int main()
{
    int grades[3] = {1,2,3};
    int res;

    res = Sum_Array(grades,3);//The address of the first element
    printf("%d",res);

}