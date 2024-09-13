# include<stdio.h>


//The usage for the unions


//How to define the unions


union Hello_World
{
    char Name[20];
    int a;
    int b;

};
//The space for the largest bytes is reserved
/**
 * @brief 
 * We will have the following
 * 
 * @return int 
 */

int main()
{
    union Hello_World d1;
    d1.a = 100;
    d1.b = 200;

    printf("Varaible is as follows -->> %d %d \n\n",d1.a,d1.b);

    printf("The sizze is as follow s-->> %d",sizeof(d1));//TaKE THE size of the largest
    /**
     * @brief 
     * Union
     * It saves several fields oin one location
     * 
     */
     */

    

}



/**
 * @brief Unions
 *
 *
 * @return int
 */
/**
 * @file StructInsie.c
 * Unions
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-08-09
 *
 * @copyright Copyright (c) 2024
 *
 */
