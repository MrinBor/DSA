///Planning 
/**
 * The development of x and y
 * We  will reserve the four bytes of memory
 * 
 * 
 */

# include<stdio.h>
# include<stdlib.h>

typedef struct Point
{
    int x;
    int y;
}Point;

int main()
{
    Point p1 = {1,2};
    FILE* fp = fopen("MyFile.bin","wb");//the write binary mode / for writing it
//The actual middle man on the same
    printf("%d %d\n\n",p1.x,p1.y);

    if(fp!=NULL)
    {
        printf("The file was successfully opened\n\n");
        fwrite(&p1,sizeof(Point),1,fp);//Parameter Where is start to copy 
        //the data from
        //Start copying information from this address basically the address
        //Single record to write to a file
        //No of records that we would like to copy the information
         
        fclose(fp);
    }
}