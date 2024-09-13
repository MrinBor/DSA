# include<stdio.h>
# include<malloc.h>



void Swap(int *a ,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a];

    // Declaratioon of the aray


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter the element  numver %d %d\n",i,j);
            scanf("%d",&arr[i][j]);
            /* code */
        }
        
        /* code */
    }


    printf("The array is as folows \n\n");

    for (int i = 0; i < a; i++)
    {
        for (int  j = 0; j < a; j++)
        {
            printf("%d ",arr[i][j]);
            /* code */
        }

        printf("\n");
        
        /* code */
    }
    
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            // NOW We will have thye following 
            arr[j][a-1-i] = arr[i][j];
            /* code */
        }
        
    }

    printf("The array is as folows \n\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr[i][j]);
            /* code */
        }

        printf("\n");

        /* code */
    }



    printf("\nReversing th4e arrqy \n");

    // Trnasposung it and thwn reverse the row


    /// Then we wi;;l have th efolling 

    // Swappin of the elements 


    for(int i=0;i<a;i++)
    {
        for (int j=0;j< a;j++)
        {
            printf("%d",arr[i][j]);
        }
    }


    // Let us find out the 

    int b;
    scanf("%d",&b);

    for (int i = 0; i < a-1 ; i++)
    {
        for (int j = i+1 ; j < a; i++)
        {
            Swap(&arr[i][j],&arr[j][i]);
            /* code */
        }
        
        /* code */
    }

    for (int  i = 0; i < a; i++)
    {
        reverse(arr[i].begin(),arr[i].end());

    }
 

}

// We can use the following task over here
/* code */
// We iwill use the two pointer approach over here

// Step two of the optimalm  array

// We will finally get thwe rotated matrix

// Revrese the arrays of teh lement
// we will abve the following

// every oondex will go to the opposite
// Opposite indexes

// 0 we aare travelloing from 1 to 3

// 1 we are travelling from elemen t number 2 to 3

// // for the third index we will use from

/**
 * @brief 
 * 
 * 
 */
// Rptation of the matrix
//  Placing all the elements in the correct place


//Mapping in terms ogf thw indexes 
// We will have the following

// J mapped to the j of another row 

// 0 th row 0 we will have  n -1
// i to (n-1) - i

// i wew iwll ahave n -1 

// o -->> n- 1 - 0

// Decalaration of the aray [n][n]

// outer loop will haeb the 

// putet loop 

// The normal indexing on case of the 2 d matrx 

// e will have the following 

// Now we will ahave the following 

// 1 0  ->> 0 2
// 1 1  ->> 1 2
// 1 3  ->> 
// The traver sal of the matrix is as follows 

// Using the i and j index we will have the following 
// Nwo 


//  Rotate matrix
//  Rtotate a matrix by clockwise direction by 90 degrrees
//  Brute force solution
//  n * n matrix
//   Wee ill create an matrix of size n * n
//   Wee will ahev thew following
