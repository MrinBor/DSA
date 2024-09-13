#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to print the Longest Common Subsequence
void Print_LCS(char b[100][100], char X[], int i, int j)
{
    if (i == 0 || j == 0)
    {
        return;
    }
    if (b[i][j] == '\\')
    {
        Print_LCS(b, X, i - 1, j - 1);
        printf("%c", X[i - 1]);
    }
    else if (b[i][j] == '|')
    {
        Print_LCS(b, X, i - 1, j);
    }
    else
    {
        Print_LCS(b, X, i, j - 1);
    }
}

int main()
{
    char X[50];
    char Y[50];

    printf("Enter the first String \n");
    scanf("%s",X);

    printf("Enter the Second String \n");
    scanf("%s",Y);


    int m = strlen(X);
    int n = strlen(Y);

    // Create a 2D array to store the directions
    char b[100][100];

    // Create a 2D array to store the length of LCS
    int c[m + 1][n + 1];

    // Fill in the c and b arrays using dynamic programming
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                c[i][j] = 0;
                b[i][j] = ' ';
            }
            else if (X[i - 1] == Y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = '\\';
            }
            else if (c[i - 1][j] >= c[i][j - 1])
            {
                c[i][j] = c[i - 1][j];
                b[i][j] = '|';
            }
            else
            {
                c[i][j] = c[i][j - 1];
                b[i][j] = '-';
            }
        }
    }

    printf("LCS: ");
    Print_LCS(b, X, m, n);

    return 0;
}
