# include<iostream>
# include<vector>
# include<map>
using namespace std;


int main()
{
    int a;
    map<int,string> m;
    printf("Enter the number of entries \n");
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the entry number (%d) \n",(i+1));
        int a;
        string b;
        printf("\nEnter the number \n");
        cin>>a;

        printf("\nEnter the string\n");
        cin>>b;

        m.insert({a,b});



        /* code */
    }


    //Iteration of the string
    map<int,string> :: iterator it;

    for(it = m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}