# include<iostream>
using namespace std;


int main()
{
    int SourceArr[8] = {0,0,1,2,1,1,2,0};
    //Again we will have
    int countarr[3] = {0};

    for (int i = 0; i < 8; i++)
    {
        countarr[SourceArr[i]]++;
        /* code */
    }

    for(int i=0;i<3;i++)
    {
        cout<<countarr[i]<<" ";
    }
    
}