# include<stdio.h>
# include<malloc.h>



union Information
{
    int data;
    char FirstName[50];
    int age;

};

union HellWorld
{
    int a1;
    int a2;
    char HelloThere[30];
};


int main()
{
    union Information in1;
    in1.age = 120;
    printf("%d",in1.age);


    printf("The size of the UNION == %d",sizeof(in1));
}

    // How to define an Union

    /**have the following
     * @brief
     * The unions variables
     *
     * We will
     *
     */
    

    // The Unions
    /**
     * @brief
     * In the mebedded
     *
     * registers to communicate withr registers
     *
     *
     * We will have the following
     *
     * It is a user defiend data type
     *
     * @return int
     */