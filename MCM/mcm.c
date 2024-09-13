#include <stdio.h>
#include <limits.h>

void print_optimal_parens(int i, int j, int n, int *bracket, char name)
{
    if (i == j)
    {
        printf("%c%d", name, i);
        return;
    }
    printf("(");
    print_optimal_parens(i, *((bracket + i * n) + j), n, bracket, name);
    print_optimal_parens(*((bracket + i * n) + j) + 1, j, n, bracket, name + 1);
    printf(")");
}

void matrix_chain_order(int *p, int n)
{
    int m[n][n];
    int bracket[n][n];

    for (int i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }

    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    bracket[i][j] = k;
                }
            }
        }
    }

    printf("Optimal Parenthesization: ");
    print_optimal_parens(1, n - 1, n, (int *)bracket, 'A');
    printf("\nMinimum number of multiplications: %d\n", m[1][n - 1]);
}

int main()
{
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Enter the dimensions of the matrices:\n");
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    matrix_chain_order(arr, n + 1);

    return 0;
}
