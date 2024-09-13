#include <iostream>
#include <vector>
#include <algorithm> // For reverse
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &Arr, int a)
    {
        int n = Arr.size();
        a = a % n; // Normalize a to handle cases where a >= n

        // Reverse the entire array
        reverse(Arr.begin(), Arr.end());
        // Reverse the first part
        reverse(Arr.begin(), Arr.begin() + a);
        // Reverse the second part
        reverse(Arr.begin() + a, Arr.end());
    }

    void printArray(const vector<int> &Arr)
    {
        // Use iterator to print array
        for (vector<int>::const_iterator it = Arr.begin(); it != Arr.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
};

int main()
{
    Solution s;

    vector<int> A1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Original array: ";
    s.printArray(A1);

    s.rotate(A1, 3);

    cout << "Rotated array: ";
    s.printArray(A1);

    return 0;
}
