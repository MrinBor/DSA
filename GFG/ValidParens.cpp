# include<string>
# include<iostream>
# include<stack>
# include<iomanip>
using namespace std;

class Solution
{
    public:
    bool ispar(std::string x)
    {
        std::stack<char> s;

        for(char ch:x)
        {
            if(ch == '(' || ch=='{' || ch=='[')
            {
                s.push(ch);
            }

            else if(ch == ')' || ch == '}' ||ch ==']')
            {
                if (s.empty() || (ch == ')' && s.top() != '(') || (ch == '}' && s.top() != '{') || (ch == ']' && s.top() != '['))
                {
                    return false;
                }

                s.pop();
            }
        }

        return s.empty();
    }
};

int main()
{
    Solution sol;
    std::string expr1 = "{([])}";
    std::string expr2 = "([]";
    std::string expr3 = "[(])";

    std::cout << std::boolalpha; // To print true/false instead of 1/0
    std::cout << "Expression: " << expr1 << " -> " << sol.ispar(expr1) << std::endl;
    std::cout << "Expression: " << expr2 << " -> " << sol.ispar(expr2) << std::endl;
    std::cout << "Expression: " << expr3 << " -> " << sol.ispar(expr3) << std::endl;

    return 0;
}
