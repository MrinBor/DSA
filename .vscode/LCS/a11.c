#include <stdio.h>
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

    if (i == 1 || j == 1)
    {
        printf("\n");
    }
}

int lcslength(char x[], char y[], int n1, int n2)
{
    int ch[n1 + 1][n2 + 1];
    char chr[n1 + 1][n2 + 1];

    for (int i = 0; i <= n1; i++)
    {
        ch[i][0] = 0;
    }

    for (int j = 0; j <= n2; j++)
    {
        ch[0][j] = 0;
    }

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                ch[i][j] = ch[i - 1][j - 1] + 1;
                chr[i][j] = '\\';
            }
            else if (ch[i - 1][j] >= ch[i][j - 1])
            {
                ch[i][j] = ch[i - 1][j];
                chr[i][j] = '|';
            }
            else
            {
                ch[i][j] = ch[i][j - 1];
                chr[i][j] = '-';
            }
        }
    }

    printf("Length of LCS: %d\n", ch[n1][n2]);
    printf("LCS: ");
    Print_LCS(chr, x, n1, n2);

    return ch[n1][n2];
}

int main()
{
    char X[50];
    char Y[50];

    printf("Enter the first String: ");
    scanf("%s", X);

    printf("Enter the Second String: ");
    scanf("%s", Y);

    int n1 = strlen(X);
    int n2 = strlen(Y);

    lcslength(X, Y, n1, n2);

    return 0;
}
