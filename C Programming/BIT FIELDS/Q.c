# include<stdio.h>
# include<malloc.h>

typedef struct 
{
    unsigned int read   : 1;
    unsigned int write  : 1;
    unsigned int execute: 1;

}Permissions;

void printPermissions(Permissions p1)
{
    printf("\n Permissions are as follows \n");
    printf("\nRead     :   %u\n", p1.read);
    printf("\nWrite    :   %u\n", p1.write);
    printf("\nExecute  :   %u\n", p1.execute);
}


void changePermissions(Permissions *p,unsigned int nr,unsigned int nw,unsigned int ne)
{
    p->execute = ne;
    p->read    = nr;
    p->write   = nw;
}

int main()
{
    Permissions f1 = {1,1,1};
    printPermissions(f1);


    int a,b,c;
    printf("Enter the priviledges for read , write and execute \n");
    scanf("%d %d %d",&a,&b,&c);

    changePermissions(&f1,a,b,c);
    printPermissions(f1);
}