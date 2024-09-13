#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::stack<char> stack;
        std::unordered_map<char, char> pairs = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char c : s)
        {
            if (pairs.find(c) != pairs.end())
            {
                if (!stack.empty() && stack.top() == pairs[c])
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            } 
            else
            {
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
