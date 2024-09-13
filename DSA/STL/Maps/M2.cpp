# include<iostream>
# include<map>
using namespace std;



int main()
{
    int a;
    map<int,string> M1;

    printf("\nEnter the number of entries in the Map\n");
    scanf("%d",&a);

    for (int i = 0; i <a ; i++)
    {
        int in1;
        string in2;

        //tHEY ARE STORD I ORDER OF NUMERIC VALUES OR LEXICOGRAPHIC ORDERING


        printf("\nEnter the numeric value in %d entry \n",(i+1));
        scanf("%d",&in1);

        printf("\nEnter the String value in %d entry \n",(i+1));
        cin>>in2;

        M1.insert({in1,in2});

        printf("\nThe elements are inserted successfully \n");
        /* code */
    }

    map<int,string> :: iterator it;

    printf("\nPrinting the values\n");
    for ( it = M1.begin(); it != M1.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl<<endl;
        COUT<<*(it).first<<" "<<*(it).second<<endl<<endl;
        /* code */
    }
    
    
}