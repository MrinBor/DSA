# include<stdio.h>
# include<stdlib.h>



void Print1n(int n)
{
    if(n>=1)
    {
        Print1n(n-1);
        printf("%d ",n);
    }
}

void Printn1(int n)
{
    if(n>1)
    {
        printf("%d ",n);
        Printn1(n-1);
    }
}


int main()
{
    int a;
    scanf("%d",&a);//The element entered

    Print1n(100);
    printf("\n\n");
    Printn1(100);
}

/**
 * @brief The unsion and intersection of the items
 * 
 * set A and B's common elements -->> Is referred to as intersection
 *  
 * Exhaustion of the array
 * 
 * 
 * The basic componennt in both of them is as follows
 * 
 * Use two index arrays 
 * 
 * if arr1[i]>arr2[j] <-- then print arr1[i] and increment i
 * if arr1[i]<arr2[j] <-- then print arr2[j] and increment j
 * 
 * 
 * 
 * 
 */
// Longest------------ common span
//  We w
// Th sum must be same
// Kedanes Algorithm
//  We will ahve the following
