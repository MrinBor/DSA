# include<iostream>
using namespace std;


//The mark row functions

// void Mark_Row(int *a,int m)
// {
//     for (int i = 0; i < m; i++)
//     {
//         cout<<a[m][i]<<" ";
//         /* code */
//     }
    
// }

// void Mark_Column(int &a,int n)
// {

// }

int main()
{
    int a,b;
    cout<<"Enter the rows and columns"<<endl;
    cin>>a>>b;

    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i][j];
            /* code */
        }
        
        /* code */
    }

    cout<<endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<arr[i][j]<<" ";
            /* code */
        }
        cout<<endl;
        
        /* code */
    }



    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         if(arr[i][j] == 0)
    //         {

    //         }
    //         /* code */
    //     }
        
    //     /* code */
    // }
    
    


    
}







 
//Approach 1
//Do whatever is told to us
//n * m Matrix
//The momennt we find 0 we will mark everthing in that particular row or column as 0
//End up marking everything on that row or column as zero
//Mark the 1's as -1 
//Do it in that way
//Matrix generated ->> Mark the all marked -1 as zeroes
//In the subsequent iterations
//The Brute force solution


//Set Matrix to zeros
//The matrix only have zeroes and ones
//Figure out the zeroes and ones

//Marks entrie ith row and jth column as 0,0 
/**
 * @brief The basic concept
 * 
 */