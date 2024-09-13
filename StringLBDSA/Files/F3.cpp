#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    std::ifstream in_file;
    in_file.open("./F1.txt");

    if (in_file)
    {
        cout << endl
             << "The file is opened for Reading Purpose" << endl;
    }
    else
    {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    std::cout << "Hello There" << std::endl;

    std::string line; // It will define a string named line
    int num;
    double total;

    // Looping through the contents continuously using eof()
    while (!in_file.eof())
    {
        in_file >> line >> num >> total;
        if (in_file.fail()) // Check for extraction errors
        {
            break;
        }
        cout << endl
             << "The output values are as follows" << endl;
        cout << line << endl
             << num << endl
             << total << endl;
    }

    in_file.close(); // Closing the file after reading

    return 0;
}
