# include<iostream>
using namespace std;



int main()
{
    pair<int,string> p;
    p = {2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;


    pair<int,string> &p1 = p;
    p1.first = 100;

    cout<<p1.first<<" "<<p1.second<<endl;


    //Now we will have the following

    pair<int,int> p_array[3];
    p_array[0] = {1,2,3};
    p_array[1] = {4,5,6};

    for (int i = 0; i < 2; i++)
    {
        cout<<p_array[i].first<<endl;
        /* code */
    }
    
}