# include<iostream>
# include<queue>
using namespace std;


int main()
{
    queue<int> num;
    cout<<num.size()<<endl;

    if(num.empty())
    {
        cout<<"The queue is empty"<<endl;
    }    

    printf("\nEnter the number of elements to push into the array\n");
    int a;
    scanf("%d",&a);

    for (int i = 0; i <a; i++)
    {
        num.push(i);
        /* code */
    }

    cout << num.size() << endl;

    if (!num.empty())
    {
        cout << "The queue is empty" << endl;
    }


    cout<<"Front element "<<num.front()<<endl;
    cout<<"The back element "<<num.back()<<endl;


    cout<<endl<<endl<<"Reverse counting the array"<<endl;

    for (int i = 0; i < a; i++)
    {
        num.pop();
        printf("\n%d\n",num.size());
        /* code */
    }
    

    return 0;
}


// Push
// Queue
//
//  5