# include<iostream>
# include<fstream>
using namespace std;


int main()
{
    fstream File1("a2.txt");
    File1<<"Hello There"<<endl;
    File1<<"Hello There" << endl;
}