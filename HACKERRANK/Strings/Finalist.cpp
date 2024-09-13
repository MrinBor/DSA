# include<iostream>
# include<sstream>
# include<vector>
using namespace std;



vector<int> PrintNums(string str)
{
    int number;
    char ch;
    stringstream ss(str);
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
    getline(cin, str); // Read the entire line as input
    vector<int> finalResult = PrintNums(str);
    for (int i = 0; i < finalResult.size(); i++)
    {
        cout<<finalResult[i]<<endl;
        /* code */
    }
    
}