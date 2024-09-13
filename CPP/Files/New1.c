#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
    int x;
    int y;
} Point;

int main()
{
    Point p1 = {1, 2};
    FILE *fp = fopen("MyFile.txt", "w"); // Open the file in write mode

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Print coordinates to the console
    printf("%d %d\n\n", p1.x, p1.y);

    // Write data to the text file
    fprintf(fp, "x: %d, y: %d\n", p1.x, p1.y);

    printf("Data successfully written to file\n\n");

    fclose(fp); // Close the file

    return 0;
}
