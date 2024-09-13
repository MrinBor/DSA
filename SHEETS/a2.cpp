#include <iostream>
using namespace std;

// Function to set the entire row to -1 (except existing 0s)
void markRow(int arr[][100], int row, int columns)
{
    for (int j = 0; j < columns; j++)
    {
        if (arr[row][j] != 0)
        {
            arr[row][j] = -1;
        }
    }
}

// Function to set the entire column to -1 (except existing 0s)
void markColumn(int arr[][100], int column, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][column] != 0)
        {
            arr[i][column] = -1;
        }
    }
}

void setZeroes(int arr[][100], int rows, int columns)
{
    // First pass: mark the rows and columns that need to be zeroed
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == 0)
            {
                markRow(arr, i, columns);
                markColumn(arr, j, rows);
            }
        }
    }

    // Second pass: update the marked rows and columns to zero
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int rows, columns;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> columns;

    int arr[100][100]; // Assuming a maximum of 100x100 matrix

    // Input the matrix
    cout << "Enter the matrix elements (only 0s and 1s): " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Set matrix zeroes based on the approach
    setZeroes(arr, rows, columns);

    // Output the modified matrix
    cout << "Matrix after setting zeroes:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
