# include<bits/stdc++.h>

std::vector<int> restoreArray(std::vector<std::vector<int>> &adjacentPairs)
{
    std::vector<int> a1;
    a1.push_back(adjacentPairs[0][0]);
    for (int i = 0; i < adjacentPairs.size(); i++)
    {
        for (int j = 0; j < adjacentPairs[i].size(); j++)
        {
            if (std::find(adjacentPairs[i].begin(), adjacentPairs[i].end(), adjacentPairs[i][j]) == adjacentPairs[i].end())
            {
                std::cout << " " << adjacentPairs[i][j];
                a1.push_back(adjacentPairs[i][j]);
            }
        }
    }

    return a1;
}

int main()
{
    std::vector<std::vector<int>> vec{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> s1=restoreArray(vec);
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s1[i].size(); j++)
            cout << s1[i][j] << " ";
        cout << endl;
    }

    return 0; // Add a return statement
}
