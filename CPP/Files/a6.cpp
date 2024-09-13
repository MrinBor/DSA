# include<iostream>
# include<fstream>
using namespace std;


int main() 
{
    ifstream fopen;
    fopen.open("a2.txt");

    if(!fopen.is_open())
    {
        cout<<"The file is not opened \n";
    }
    // else
    // {
    //     string line;
    //     getline(fopen,line);
    //     cout<<line<<endl;

    //     getline(fopen, line);
    //     cout << line << endl;
    // }

    while(fopen.good())
    {
        string line;
        getline(fopen, line);
        cout << line << endl;
    }


    //using the loop

}