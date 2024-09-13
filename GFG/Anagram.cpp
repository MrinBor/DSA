# include<iostream>
# include<unordered_map>
# include<string>
using namespace std;


void Print(string A1)
{
    unordered_map<char,int> freqArray;


    for(char ch:A1)
    {
        freqArray[ch]++;
    }

    //Printng the frequency of each element;

    for (auto it = freqArray.begin(); it != freqArray.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}

int main()
{
    string A1 = "ABBCCC";
    Print(A1);
    //Print the no of occurances of a partucular string
}