# include<iostream>
# include<vector>
using namespace std;

int main()
{
    //it.begin and it.end
    vector<int> a1 = {1,2,3,4,5};


    for (int i = 0; i < a1.size(); i++)
    {
        cout<<a1[i]<<endl;
        /* code */
    }

    cout<<endl;

    //Iteration with the helpof vector
    vector<int> ::iterator it;
    it = a1.begin();

    cout<<(*(it+1))<<endl;//The output wil be 2 in thsi case


    for ( it = a1.begin(); it != a1.end(); it++)//Iterator -->> WILL GO TOTHEBNEX iTERATR
    {

        cout<<*(it)<<endl;
        /* code */
    }

    //the it += will be the primary focus in case of the vector

    vector<int> n1 = {1,2,3,4,5};

    vector<int> :: iterator itt ;
    cout<<endl<<endl;

    for (itt = n1.begin(); itt != n1.end(); itt++)
    {
        cout<<*(itt)<<endl;
        /* code */
    }

    vector<int> ::iterator newit;
    newit = n1.begin();
    cout<<"Iteration printing \n\n";
    for (int i = 0; i < n1.size(); i++)
    {
        cout << (*newit) + i << " ";
        /* code */
    }
    
    
    

    
}