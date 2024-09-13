

class Solution
{
    public:

    int palindromeNot(std::string x)
    {
        int left = 0;
        int right = x.length()-1;


        while (left<right)
        {
            if(x[left]!=s[right])
            {
                return false;
            }

            left++;
            right--;
            /* code */
        }

        return true;
        
        
    }
}