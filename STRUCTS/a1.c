

# include<stdio.h>
# include<malloc.h>


//The template of the struct is as follows 

//Struct name

struct Date
{
    int day;
    int month;
    int year;
};

struct Coordinates
{
    int x;
     int y;
};


struct Address
{
    char State[20];
    char City[10];
    char Sheet[15];
    int number;
};


int main()
{
    int age = 50;
    float salary = 10.5;


    struct Date d;
    d.day=1;
    d.month=1;
    d.year=2024;

    printf("%d/%d/%d",d.day,d.month,d.year);

    printf("\n\n\n%d",sizeof(d));//4*3 -->> Total 12 bytes 

                                // int and the float values
                                // Now we will have two boxes
                                // Pack them in a new Box
    return 0;
}

// Variables and the fields for the same
// Managing the employess in a company
//  We have the fields such as
/**
 * @brief
 * Company name
 * Employee Id
 * // And so forth
 *
 * @return int
 * 
 * The employee details and the numbers 
 * 
 * We have the following variables
 * 
 * Company Hirirg 10 Employees
 * 
 * 4k Variabless
 * 
 * Method to organise our programme in a better manner
 * 
 * Every detail and the relevant information
 * 
 * Under one structure
 * 
 * Organising every detaial about an employee
 */
