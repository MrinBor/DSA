# include<iostream>
# include<sstream>
# include<vector>
# include<sstream>

vector<int> ParseIntss(string str)
{
    vector<int> result;
    stringstream ss(str);
    char ch;
    int number;

    while(ss>>number)
    {
        result.push_back(number);
        ss>>ch;
    }

    return result;
}

int main()
{

}