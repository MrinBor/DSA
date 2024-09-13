# include<iostream>
# include<cstring>
using namespace std;



int main()
{
    char str1[] = "Hello Geeks!";
    char str2[] = "How r You Babe";

    char str3[40];
    char str4[40];

    strcpy(str1,str2);
    cout<<"Str1::"<<str1<<"\n"<<"\nStr2::"<<str2<<endl;
}