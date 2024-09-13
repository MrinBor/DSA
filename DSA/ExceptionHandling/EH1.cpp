# include<iostream>
# include<map>
using namespace std;



int main()
{
    int a = 10;
    int b = 0;
    int c;


    try
    {
        if(b == 0 )
        {
            throw 1;
        }   

        c = a/b;
        cout<<c<<endl;
    }

    catch(int q)//Throw and catch 
    //No value is importatn
    //Just something need to be thrown
    {
        cout<<"Division By ero is not allowed"<<endl;
    }
}

/**
 * @brief
 * Types of errors are
 * Syntax  Compiler will remove such errors
 *
 *
 * Logical  Result or pprocedural Problemd
 * //Wrong concept in Logic
 * //Debugger Will help resolve such issues
 * Faced by the programmers
 *
 *
 *
 * Runtime Errors
 * Error during the runtime of a programme
 *
 *
 *
 * Variable is not declared and used
 *
 * Consitional statements
 *
 *
 * @return int
 */

