# include<iostream>
# include<sstream>
# include<vector>
# define MAX 10
using namespace std;


vector<int> parseInt(string str)
{
    vector<int> result;
    stringstream ss(str);

    int  number;
    char ch;

    while(ss>>number)
    {
        result.push_back(number);
        ss>>ch;
    }

    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInt(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}