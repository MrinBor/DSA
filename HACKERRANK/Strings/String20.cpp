# include<iostream>
# include<sstream>
# include<vector>
using namespace std;

vector<long> PrintNums(string str)
{
    int number;
    char ch;
    vector<long> Result;
    stringstream ss(str);

    while(ss>>number)
    {
        Result.push_back(number);
        ss>>ch;
    }

    return Result;

}

int main()
{
    string a1;
    cin>>a1;

    vector<long> Output;
    Output = PrintNums(a1);

    for (int i = 0; i < Output.size(); i++)
    {
        cout<<Output[i]<<endl;
        /* code */
    }
    
}