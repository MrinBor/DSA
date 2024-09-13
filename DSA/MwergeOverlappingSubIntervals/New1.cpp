#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    printf("\nEnter the size of the Array\n");
    scanf("%d", &a);

    int Arr[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("\nEnter the Element number (%d,%d)\n", i, j);
            scanf("%d", &Arr[i][j]);
            /* code */
        }

        /* code */
    }

    printf("Before transposing we will haev the following\n\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", Arr[i][j]);
            /* code */
        }
        cout << endl;

        /* code */
    }

    // Now we will have the following

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; i < a; i++)
        {
            Arr[j][a - i - 1] = Arr[i][j];
            /* code */
        }

        /* code */
    }

    printf("After rotating 90 degree  we will haev the following\n\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", Arr[i][j]);
            /* code */
        }
        cout << endl;

        /* code */
    }


    return 0;
}