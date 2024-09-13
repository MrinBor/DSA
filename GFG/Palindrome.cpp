# include<iostream>
# include<string>
# include<stack>
using namespace std;

class Solution
{

    
    public:


    int palindromeOrNot(std::string x)
    {
        int left = 0;
        int right = x.length() - 1;

        while(left<right)
        {
            if(x[left]!=x[right])
            {
                return 0;
            }

        
            left++;
            right--;
        }

        return true;
    }
};

int main()
{
    Solution s;
    if(s.palindromeOrNot("abba"))
    {
        cout<<" TRUE "<<endl;
    }

}