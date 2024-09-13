# include<iostream>
# include<vector>
# include<set>
# include<algorithm>
using namespace std;


int main()
{
    //String is a rotatiion of another or not

    //Declaaration and the inclusion of the strings


    string s1,s2;
    cin>>s1>>s2;
    //The incluusion of the strings
    cout<<s1<<endl<<s2<<endl;

    int l1 = s1.length();
    int l2 = s2.length();

    if(l1!=l2)
    {
        cout<<" No  "<<endl;
    }

    else
    {
        string temp = s1  + s2;
        if(temp.find(s1)!=  string::npos)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



//IF TEMPP.FIN(S1)
///if(temp.find(s1)!=string::npos)

/**
 * @brief 
 * 
 * 
 */

}