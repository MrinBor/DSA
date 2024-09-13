# include<iostream>
using namespace std;


void Swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;

    int **Origin = new int *[a];
    int **Temp = new int *[b];
    for (int i = 0; i < a; ++i)
        Origin[i] = new int[b];
    for (int i = 0; i < b; ++i)
        Temp[i] = new int[a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> Origin[i][j];
            Temp[j][i] = Origin[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << Origin[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a / 2; j++)
        {
            Swap(&Temp[i][j], &Temp[i][a - j - 1]);
        }
    }

    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << Temp[i][j] << " ";
        }
        cout << endl;
    }
}