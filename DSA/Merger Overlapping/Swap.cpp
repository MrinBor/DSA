#include <iostream>
#include <vector>
#include <algorithm> // Needed for reverse

using namespace std;

int main()
{
    int a;
    cout << "Enter the size of the matrix: ";
    cin >> a;

    vector<vector<int>> Arr(a, vector<int>(a));

    // Input the matrix elements
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "Enter the element number (" << i << "," << j << "): ";
            cin >> Arr[i][j];
        }
    }

    // Display the array before rotation
    cout << "\nThe array before rotation is as follows:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }

    // The rotate functionality (transpose and then reverse each row)
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            swap(Arr[i][j], Arr[j][i]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        reverse(Arr[i].begin(), Arr[i].end());
    }

    // Display the array after rotation
    cout << "\nThe array after rotation is as follows:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
