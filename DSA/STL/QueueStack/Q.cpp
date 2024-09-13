# include<iostream>
# include<queue>
using namespace std;




int main()
{
    queue<string> Q;


    int a;
    cout<<"Enter the number of elements in the Queue"<<endl;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        string input;
        cout<<"Enter the string for the entry "<<(i+1)<<endl;
        cin>>input;

        Q.push(input);
        cout<<"Element pushed in the Queue successfully "<<endl;
        /* code */
    }

    cout<<endl<<"Printing the contents of the Queue"<<endl;
    while(!Q.empty())
    {
        cout<<Q.front()<<endl;
        Q.pop();

        //Fifo Prototcol
        //The first element inserted is removed first
        
    }
    
}