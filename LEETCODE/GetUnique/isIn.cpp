# include<iostream>
# include<map>
# include<vector>
# include<set>
# include<algorithm>
using namespace std;

class Solution
{
    public:

    void finUniqueElement(vector<int> A1,int m1)
    {
        int size  = A1.size();

        vector<int> uniqueElement;
        for (int i = 0; i < size; i++)
        {
            bool isUnique = true;

            for (int j = 0;j < uniqueElement.size(); j++)
            {
                if(1[i] == uniqueElement[j])
                {
                    isUnique = false;
                    break;
                }
                /* code */
            }

            if(isUnique)
            {
                uniqueElement.push_back(A1[i]);
            }
            
            /* code */
        }
        
    }
}

int main()
{

}