#include <stdio.h>
# include<stdlib.h>
#include <limits.h>

void printOptimalParenthesis(int **s, int n, int i, int j)
{
    if (i == j)
    {
        printf("A%d", i);
    }
    else
    {
        printf("(");
        printOptimalParenthesis(s, n, i, s[i][j]);
        printOptimalParenthesis(s, n, s[i][j] + 1, j);
        printf(")");
    }
}

int matrixChainMultiplication(int p[], int n)
{
    int m[n][n];
    int **s = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        s[i] = (int *)malloc(sizeof(int) * n);
    }

    for (int i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }

    for (int chainLength = 2; chainLength < n; chainLength++)
    {
        for (int i = 1; i < n - chainLength + 1; i++)
        {
            int j = i + chainLength - 1;
            m[i][j] = INT_MAX;

            for (int k = i; k <= j - 1; k++)
            {
                int cost = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < m[i][j])
                {
                    m[i][j] = cost;
                    s[i][j] = k;
                }
            }
        }
    }

    printf("Optimal parenthesization: ");
    printOptimalParenthesis(s, n, 1, n - 1);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        free(s[i]);
    }
    free(s);

    return m[1][n - 1];
}

int main()
{
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    int p[n + 1];
    printf("Enter the dimensions of matrices:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Row No: ");
        scanf("%d", &p[i]);
        printf("Column No: ");
        scanf("%d", &p[i + 1]);
    }

    int minScalarMultiplications = matrixChainMultiplication(p, n + 1);
    printf("The optimal ordering of the given matrices requires %d scalar multiplications\n", minScalarMultiplications);

    return 0;
}
