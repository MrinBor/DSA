#include <iostream>
#include <algorithm> // for std::reverse
using namespace std;


void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a;
    std::cin >> a; // Assuming 'a' is the size of the 2D array

    int arr[a][a]; // Assuming a square 2D array


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d",&arr[i][j]);
            /* code */
        }
        
        /* code */
    }
    

    // Transpose the matrix
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            Swap(&arr[i][j], &arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < a; i++)
    {
        std::reverse(arr[i], arr[i] + a); // Use standard reverse for each row
    }



    

    // Optional: Print the modified array
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
