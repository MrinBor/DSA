# include<iostream>
using namespace std;

void swap(char &a,char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

int main()
{
    string a1  = "Hello";
    cout<<a1<<endl;

    int start = 0;
    int end = a1.size() - 1;

    while(start<end)
    {
        swap(a1[start],a1[end]);
        start++;
        end--;
    }

    cout<<a1<<endl;
}