#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file_stream;
    file_stream.open("MyFile.txt");

    if (!file_stream.is_open())
    {
        cout << "The file is not opened for operatoiso\n";
    }

    else
    {
        file_stream << "Learning new tasks " << endl;
        file_stream.close();
        cout << "Successfully written in the code" << endl;
    }
} 