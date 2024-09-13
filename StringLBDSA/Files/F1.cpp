# include<iostream>
# include<iomanip>
# include<fstream>
//The search for the txt file
//Opening of the file
using namespace std;

int main()
{
    std::ifstream in_file;
    in_file.open("./F1.txt");

    if(in_file)
    {
        cout<<endl<<"The file is opened for Reading Purpose"<<endl;
    }

    std::cout<<"Hello There"<<std::endl;

    std::string line;//It will define a string named line
    // cin>>line ; instead of this we would use
    int num;
    double total;


    // in_file>>line;
    // in_file>>num;
    // in_file >>total;///Ipnput with the gap will give us the same output

    //The first line of output we will have the following
    // cout<<"The output values are as follows"<<endl;
    // cout <<endl<<endl<<endl<< line<<endl<< num<<endl << total << endl;

    // std::cout<<endl;

    // in_file.close();


    //The looping the contents continuously
    //The second set of outputs

    while(!in_file.eof())
    {
        in_file>>line>>num>>total;
        cout <<endl<<endl<<endl<< line<<endl<< num<<endl << total << endl;
    }

    return 0;


}


//The file streams

// Reading th etext files from 
// The helpof f stream