# include<iostream>
# include<fstream>
using namespace std;


int main()
{
    fstream io;
    io.open("BB.txt");


    if(io)
    {
        cout<<"The file is opened"<<endl;
    }

    io<<"Hello World"<<endl;
}