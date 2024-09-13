#include <iostream>
#include <string>
using namespace std;

int findLength(const string &a)
{
    return a.length(); // Correctly get the length of the string using .length()
}

int main()
{
    string str;

    // Prompt user to input a string
    cout << "Enter a string: \n";

    // Use std::getline to capture the entire string, including spaces
    getline(cin, str);

    // Output the entered string
    cout << "The entered string is: " << str << endl;

    // Get the length of the string using findLength
    cout << "The length of the string is: " << findLength(str) << endl;

    cout<<"The size of the string is "<<str.size()<<endl;
    cout<<"The length of the string is "<<str.length()<<endl;

    cout<<"The capacity of the string is "<<str.capacity()<<endl;

    cout<<"Size"<<str.size()<<endl;


    //The manual

    string str1 = "ABABABABABABABABABABABABABABABABABABABABAB";
    cout<<endl<<"The capacity "<<str1.capacity()<<endl;

    cout<<"The preserving capacity WE WILL HAVE"<<endl;

    std::cout<<"Before Reserve ,capacity =  "<<str.capacity()<<std::endl;
    

    return 0;
}
