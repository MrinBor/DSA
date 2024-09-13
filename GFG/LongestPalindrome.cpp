# include<iostream>
# include<string>
# include<map>
using namespace std;

//Longest Palindrome 
void longestPal(string s)
{
    int l,h;

    int start = 0;
    int end   = 1;
    for(int i=1;i<s.length();i++)
    {
        l = i-1;
        h = i;

        while(l>=0 && h<s.length() &&s[l] == s[h])
        {
            if(h-l+1>end)
            {
                start = l;
                end = h-l+1;
            }

            l--;
            h++;
        }

        //For the odd part
        l = i - 1;
        h = i+1;

        while (l >= 0 && h < s.length() && s[l] == s[h])
        {
            if (h - l + 1 > end)
            {
                start = l;
                end = h - l + 1;
            }

            l--;
            h++;
        }
    }

    longestPalindrome(s,start,start+end);
}



int main()
{

}