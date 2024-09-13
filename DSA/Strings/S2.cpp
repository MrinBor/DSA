# include<iostream>
# include<set>
# include<vector>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter string 1"<<endl;
    cin>>s1;

    cout<<"Enter the string 2"<<endl;
    cin>>s2;-


    cout<<"String 1 : -> "<<s1<<"\n"<<"String 2 : -> "<<s2<<endl;


    //Nw we willl have the following
    string temp = s1 + s2;

    // // temp.find(s2)!-=string::npos;

    if(temp.find(s1)!=string::npos)
    {
        cout<<"YES"<<endl;
    }


    else
    {
        cout<<"No"<<endl;
    }
}