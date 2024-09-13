#include <iostream>
#include <string>

using namespace std;

string CountAndSay(int n)
{
    if (n == 1)
        return "1";
    if (n == 2)
        return "11";

    string s = "11";

    for (int i = 3; i <= n; i++)
    {
        string t = "";
        s += '&'; // Adding a delimiter to handle the last group of characters
        int c = 1;

        for (int j = 1; j < s.length(); j++)
        {
            if (s[j] != s[j - 1])
            {
                t += to_string(c);
                t += s[j - 1];
                c = 1;
            }
            else
            {
                c++;
            }
        }
        s = t;
    }
    return s;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << CountAndSay(n) << endl;
    return 0;
}
