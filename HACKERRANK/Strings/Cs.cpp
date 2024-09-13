# include<iostream>
# include<sstream>
# include<vector>
using namespace std;

vector<int> PrintNums(string str)
{
    stringstream ss(str);
    int number;
    char    ch;
    vector<int> result;

    while(ss>>number)
    {
        result.push_back(number);
        ss>>ch;
    }

    return result;

}


int main()
{
    string str;
    cin>>str;

    vector<int> Results = PrintNums(str);
    for (int i = 0; i < Results.size(); i++)
    {
        cout<<Results[i]<<endl;
        /* code */
    }
    
}