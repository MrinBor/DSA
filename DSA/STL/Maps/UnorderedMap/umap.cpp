# include<iostream>
# include<map>
# include<unordered_map>
using namespace std;

void print(unordered_map<int,string>  &m)
{
    cout<<m.size()<<endl;

    for(auto &Pr:m)
    {
        cout<<Pr.first<<" "<<Pr.second<<endl;
    }
}

int main()
{
    unordered_map<int,string> M;
    M[1] ="abc";
    M[2] = "def";
    M[3] = "def";

    print(M);

    auto it = M.find(1);

}