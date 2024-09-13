# include<iostream>
using namespace std;

int main()
{
    pair<int,string> p;
    p = {1,"ABC"};
    cout<<p.first<<" "<<p.second<<endl;   


    //The first and second varibale will give us the values

    //Now we will have tgghe notio of pass by reference

    pair<int,string> &p1 = p;//By reference we are taking this

    p1.first = 100;

    cout<<p.first<<" "<<p.second<<endl;
    //Reference in c++


    //Pairs are used to maintiaina relation betweene two values
    int a[] = {1,2,3};
    int b[] = {4,5,6};

    //Now we willhave the following
    //Pairs of arrays decalration

    pair<int,int> Pair_Array[3];//Each element is a pair of two integers
    
    Pair_Array[0] = {1,2};
    Pair_Array[1] = {2,3};
    Pair_Array[2] = {3,4};

    cout << Pair_Array[0].first << " " << Pair_Array[0].second<<endl;

    //Now we will have the following 


    int A1[ 3] = {1,2,3};
    int A2[ 3] = {4,5,6};


    cout<<endl<<endl;
    cout<<A1[0]<<endl;
    cout<<A2[0]<<endl;

    //Now we will have t

    pair<int,int> P_Array[3];
    P_Array[0] = {1,2};
    cout<<endl<<P_Array->first<<" "<<P_Array->second<<endl;

    cin>>P_Array->first;
    cout<<P_Array->first<<endl;
}