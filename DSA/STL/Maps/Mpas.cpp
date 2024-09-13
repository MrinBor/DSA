# include<iostream>
# include<vector>
# include<map>
using namespace std;


//Defaults value in  an arrry

void Printing_Default(map<int,int> &Arr)
{
    cout<<Arr.size()<<endl;//Size of th eamap stored i  te  aray
    for(auto &pr:Arr)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}

// void Print(map<int,int> &m)
// {
//     cout<<m.size()<<endl;


//     for (auto &pr:,)
//     {
//         /* code */
//     }
    
// }

int main()
{
    map<int,int> m;
    m[6];

    //The unique keys are always unique
    //In case of an array

    Printing_Default(m);
}