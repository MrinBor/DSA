# include<iostream>
# include<map>
# include<vector>
# include<iostream>
using namespace std;


int main()
{
    int a;
    cout<<"Enter the number of entries in the MAP"<<endl;
    cin>>a;

    map<int,string> Arr;
    for (int i = 0; i < a; i++)
    {
        int a1;
        string a2;
        cout<<"Enter the entry number "<<(i+1)<<endl;
        cin>>a1;
        cin>>a2;



        Arr.insert({a1,a2});
        /* code */
    }

    //Printing the map
    cout<<endl<<"Printing the MAP "<<endl;


    for(const auto& m: Arr)
    {
        cout<<m.first<<" "<<m.second<<endl;
    }

    for (int i = 1; i <= Arr.size(); i++)
    {
        cout << endl<< Arr[i] << endl;

        /* code */
    }
    

    


}