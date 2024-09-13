#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    ifstream ifin;
    ofstream ofout;

    
    file.open("Main1.txt", ios::in | ios::out | ios::trunc );



    if (!file.is_open())
    {
        cout << "The file is not opened successfully \n";
    }
    else
    {
        cout << "The file is opened successfully \n";
    }

    return 0;
}


//ios::trunc -->tege file will 
// ios::in | ios::out
// is_open()