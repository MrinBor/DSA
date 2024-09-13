#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int doUnion(std::vector<int> &arr1, std::vector<int> &arr2)
    {
        // Combine both arrays into one vector
        std::vector<int> result = arr1;
        result.insert(result.end(), arr2.begin(), arr2.end());

        // Sort the combined vector
        std::sort(result.begin(), result.end());

        // Remove duplicates by using the unique function
        auto it = std::unique(result.begin(), result.end());

        // Resize the vector to remove the undefined trailing elements
        result.resize(std::distance(result.begin(), it));

        // The size of the result vector now gives the count of unique elements
        return result.size();
    }
};

int main()
{
    Solution sol;

    std::vector<int> arr1 = {85, 25, 1, 32, 54, 6};
    std::vector<int> arr2 = {85, 2};

    int unionCount = sol.doUnion(arr1, arr2);

    std::cout << "Number of elements in the union: " << unionCount << std::endl;

    return 0;
}
