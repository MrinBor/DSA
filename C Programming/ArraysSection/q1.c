
# include<stdio.h>
# include<malloc.h>


int main()
{
    int arr[10];
    scanf("%d",&arr[0]);
    printf("%d",arr[0]);
}

// The arrays

// The colelction of similar items stored in a contiguous memory locatioin
/**
 * @brief
 * rANGE OF INDEX -->> 0 T SIZE-1
 *
 * Contiguous memory location
 *
 *  The size of each byet is 4 Bytes
 * 
 * Starting from 1000 and go0es on
 * 1000 -> 1003
 * 1003 -> 1007// 4 per cell
 *
 *Based on memory alloication the arraysb are of Two Types
 *Static 
 * Allocates at compile time
 * 
 * Dyanamic
 * Alloacatec at runtime
 * 
 * Address of ith index  =  Base Address + Offset
 * Offset  = i * sizeof(an element)
 */