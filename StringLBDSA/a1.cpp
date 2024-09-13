#include <iostream>
#include <string>
using namespace std;

void Strings()
{
    cout << "Hello World" << endl;
}


//We havbe this implementation

void Swap(char &a, char &b)
{x
    char temp = a;
    a = b;
    b = temp;
}

int main()
{
    string s;
    cout << "Enter the string: " << endl;
    cin >> s;

    // Uncomment to use the Strings function
    // Strings();

    int start = 0;
    int end = s.size() - 1;//The length  - 1

    while (start < end)
    {
        Swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << "Reversed string: " << s << endl;

    return 0;
}
