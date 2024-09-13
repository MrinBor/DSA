# include<iostream>
# include<vector>
using namespace std;


void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
        /* code */
    }
    
}

int main()
{
    int a[10];

    cin>>a[0];
    cout<<"he value at index 0  is "<<a[0];

    //A vector can also contain pairs ass well

    //The push back functionality 
    //We will have the following

    vector<int> v;
    int n;
    cout<<"\nEnter the size of the vector to enter\n";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        /* code */
    }

    cout<<endl<<endl;

    printVector(v);
    


}