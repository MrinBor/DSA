#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{

    // Complete this function
    vector<int> result;
    stringstream ss(str);
    int number;
    char ch;

    // Extract integers and skip the commas
    while (ss >> number)
    {
        result.push_back(number);
        ss >> ch; // This skips the comma
    }

    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}