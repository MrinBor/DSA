#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ifstream fopen;
    fopen.open("a2.txt");

    if (!fopen.is_open())
    {
        cout << "The file is not opened \n";
        return 1;
    }

    string line;
    int sum = 0;

    // Skip the header line
    getline(fopen, line);

    while (getline(fopen, line))
    {
        stringstream ss(line);
        string rollnoStr, id, password;

        getline(ss, rollnoStr, ',');
        getline(ss, id, ',');
        getline(ss, password, ',');

        int rollno = stoi(rollnoStr);
        sum += rollno;
    }

    cout << "Sum of all roll numbers: " << sum << endl;

    fopen.close();
    return 0;
}
