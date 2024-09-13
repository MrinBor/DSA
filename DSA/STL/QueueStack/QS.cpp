# include<iostream>
# include<queue>
# include<stack>
using namespace std;




int main()
{
    //Implementation of the stack
    stack<int> S;

    int a;
    cout<<"Enter the number of element in the Stack"<<endl;
    cin>>a;

    for (int i = 0; i < a; i++)
    {

        cout<<"Enter the entry number "<<(i+1)<<endl;
        int num;
        cin>>num;


        S.push(num);
        cout<<"Element pushed in the Queue "<<endl;
        /* code */
    }

    while(!S.empty())
    {
        cout<<S.top()<<endl;
        S.pop();
    }
    
}

// Push -->> Put into the element
// Pop  -->> Take out the top element
//Fifo -->> First in first out approach |_| 
//We make out these from the front of the queue

/**
 * @brief 
 * Operation onn Queue
 * 
 * Push
 * Pop()
 * 
 * 
 */

//Top element 
//Size -->> and the top element 
//Put the element 
//find the topmost element 

// Access the top element
//  And find the top most element

// STACK __-->. lifo (Last in First out DS)



// Key and implementations
// From the programming POV

//Stack and queus in cpp

