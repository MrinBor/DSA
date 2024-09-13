#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Before reserve(), capacity = "
              << str.capacity() << std::endl;

    
    str.reserve(100); // Reserve memory for 100 characters
    

    std::cout << "After reserve(), capacity = "
              << str.capacity() << std::endl;



    //The string capacity

    


    return 0;
}
