#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> Arr;
    cout << "Enter the number of entries in the map " << endl;
    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        string a1;
        int a2;
        cout << "Enter the string key (a1) and integer value (a2) for entry " << (i + 1) << endl;
        cin >> a1 >> a2;

        Arr.insert({a1, a2});
        cout << "Inserted Successfully" << endl;
    }

    string key;
    cout << "Enter a string key to search: " << endl;
    cin >> key;

    auto it = Arr.find(key);
    if (it != Arr.end())
    {
        cout << "Key found successfully: " << it->first << " -> " << it->second << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    return 0;
}
