# include<iostream>
# include<map>
# include<algorithm>
# include<vector>
using  namespace std;



int main()
{
    vector<int> A = {1,2,3,4,5,5,4,3,2,1};

    vector<int> uniqueElement;

    for (int i = 0; i < A.size(); i++)
    {
        bool isUnique = true;

        for (int j = 0; j < uniqueElement.size(); j++)
        {
            if(A[i] == uniqueElement[j])
            {
                isUnique = false;
                //isUnique Element is false in the inner loop
                //Of hte particular function
                break;
            }
            /* code */
        }

        if(isUnique)
        {
            uniqueElement.push_back(A[i]);
        }
        
        /* code */
    }


    cout<<"The unique elements in the arrays are as follows "<<endl;

    for(int elem:uniqueElement)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    return 0;
    
}
