# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

//The elemtn 
//We will 

void Rotate(vector<int> Arr,int k)
{
    int size = Arr.size();

    k = k%size;

    std::sort(Arr.begin(), Arr.end());


    //The rotation of the array

    //BEFOREE ROTATION WE HAVE

    for (int i = 0; i < Arr.size(); i++)
    {
        cout<<Arr[i];
        /* code */
    }


    cout<<endl<<endl;
    

    int num = k%size;


    cout<<"After rotation"<<endl;
    reverse(Arr.begin(),Arr.end());
    reverse(Arr.begin(),Arr.begin()+num);
    reverse(Arr.begin()+num,Arr.end());

    for (int i = 0; i < size; i++)
    {
        cout << Arr[i];
        /* code */
    }
}

int main()
{
    vector<int> A1 = {1,2,3,4,5,6};
    Rotate(A1,3);
}