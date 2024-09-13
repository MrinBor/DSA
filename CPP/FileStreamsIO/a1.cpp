# include<iostream>
# include<iomanip>
using namespace std;


int main()
{
    double num {1234.5678};
    std::string hellodisp("Hello");

    std::cout<<num<<endl<<hellodisp<<std::endl;

    //Field wisth of 10 for the next data item

    std::cout<<std::setw(10)<<num<<"  "<<hellodisp<<std::endl;


    std::cout<<"Name"<<setw(10)<<"Class"<<setw(10)<<"Section"<<setw(10)<<"Subject"<<std::endl;
    std::cout<<"Mrinmoy"<<setw(5)<<"12"<<setw(5)<<"C"<<setw(5)<<"English"<<std::endl;
    //The fiweld wisth of 10 is displayed over here


    //setfill works with field width compatiablity issues
    //We will have the following

    std::cout<<std::setfill('-')<<endl;
    std::cout<<std::setw(10)<<num<<hellodisp<<std::endl;
}