#include <iostream>
#include <sstream>
#include <vector>
#include <string> // Use this instead of string.h

using namespace std;

vector<int> PrintRes(string str)
{
    int number;
    char ch;
    vector<int> result; // Corrected "vetor" to "vector"

    stringstream ss(str);
    while (ss >> number)
    {
        result.push_back(number);
        ss >> ch; // Read the delimiter (e.g., comma, space)
    }
    return result;
}

int main()
{
    string str;
    getline(cin, str); // Use getline to read the entire line
    vector<int> res = PrintRes(str);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}
