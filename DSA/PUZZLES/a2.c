#include <stdio.h>

int main()
{
    int x = 1, y = 2, z;

    z = printf("%*c%*c", x, ' ', y, ' ');
    printf("\nSum = %d\n", z);

    return 0;
}

/**
 * @brief
 *    Printf return s an integers indicating how many 
 *
 *     z = printf("%*c%*c",x,'',y,'');
 * Masking in c is used over here
 * 
 * 
 * 
 * 
 * 
 * Format specifier followed by width
 * .precision for the
 * % [flag] [width] [.precision] [modifier] [conversion_character]
 * The l and d are the modifiers over here
 *
 *
 *
 * width 5-->>><<>> _ _ 2 5 6
 * //The format will be like this over here
 *
 * Two blank space -->> We will have 256
 * The total width will be 7
 *
 * flag  0  then the empty spaces will be filled with zeroes
 *
 *
 *
 * c,d -->. conversion character
 *
 */
//% -->> Format specifier

// Add two numbers without using any operator or LOOP
