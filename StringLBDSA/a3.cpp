#include <iostream>
using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size();

    string s1 = "Mrinmoy";
    string s2 = " Bordoloi";
    string s3 = s1+ s2;
    cout<<endl<<s3<<endl;

    string Appended = s1.append(s2);

    s1.push_back('B');
    cout<<s1<<endl;

    s1.pop_back();
    cout<<s1<<endl;
    cout<<"The appended String ->> "<<Appended<<endl;
    //Escape character

    string s4 = "I am a god \"BOY\"";// \ The escape character
    cout<<s4<<endl;

    string n1 = "\\";
    cout<<n1<<endl;
}