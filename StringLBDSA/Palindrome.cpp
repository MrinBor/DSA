# include<iostream>
using namespace std;

void Swap(char &a,char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void Palindrome(string s)
{
    int start = 0;
    int end = s.size()-1;

    while (start<end)
    {
        if(s[start]!=s[end])
        {
            cout<<"Not a Palindrome"<<endl;
            return;
        }
        start++;
        end--;
        /* code */
    }

    cout<<"Palindrome"<<endl;
    
}

int main()
{
    Palindrome("NAMAN");
}