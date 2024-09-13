# include<iostream>
# include<map>
# include<string>
# include<vector>
using namespace std;

int main()
{
    map<int,string> Map;


    Map[1] = "Hello";
    Map[2] = "World";
    Map[3] = "My name is Mrinmoy";

    auto it = Map.find(3);

    Map.erase(it);

    if(it == Map.end())
    {
        cout<<"INDEX ENTRY NOT FOUND"<<endl;
    }
    else
    {
        cout<<"The value in the entries "<<endl;
        cout<<(*it).first<<" | "<<(*it).second<<endl;
    }


    //
    /**
     * @brief 
     * 
     * Safety check 
     * 
     * if(it!=m.end())
     * {
     * 
     * }
     * 
     * 
     */
 }