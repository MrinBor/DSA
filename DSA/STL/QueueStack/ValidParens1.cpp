# include<stack>
# include<string>
# include<iostream>
using namespace std;


class Solution
{
    public:

    bool ispar(std::string x)
    {
        std::stack<char> s;


        for(char ch : x)
        {
            if (ch =="(" || ch == "{" || ch =="[")
            {
                s.push(ch);
            }

            else if (ch ==")" || ch=="}" || ch =="]")
            {
                if (s.empty() ||
                    (ch == ')' && s.top() != '(') ||
                    (ch == '}' && s.top() != '{') ||
                    (ch == ']' && s.top() != '['))
                {
                    return false; // The brackets are not balanced.
                }
                // Pop the matching opening bracket from the stack.
                s.pop();
            }
        }

        return s.empty();
    }
}