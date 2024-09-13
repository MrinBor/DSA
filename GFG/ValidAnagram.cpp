# include<iostream>
# include<unordered_map>
using namespace std;

//Valid Anagram or not


bool isAnagram(string a1,string a2)
{
    if(a1.length()!=a2.length())
    {
        return false;
    }

    std::unordered_map<char,int> charcount;
  for(char ch:a1)
        {
            charcount[ch]++;
        }

        for(char ch:a2)
        {
            charcount[ch] --;

            if (charcount[ch]<0)
            {
                return false;
            }
        }



    

    return true;
}


bool isAnagram2(string a1,string a2)
{
    int count[256] = {0};

    if(a1.length()!=a2.length())
    {
        return false;
    }

    for(int i=0;i<a1.length();i++)
    {
        count[a1[i]]++;
        count[a2[i]]--;
    }

    for(int i=0;i<256;i++)
    {
        if(count[i]<0)
        {
            return false;
        }
    }


        return true;
    
}

int main()
{
    if(isAnagram("ABBA","ABAB"))
    {
        cout<<"THE ANAGRAM IS VALID"<<endl;
    }

    if(isAnagram2("ABBA","ABAB"))
    {
        cout<<"TEH ANAGRAM IS VALID "<<endl;
    }
}