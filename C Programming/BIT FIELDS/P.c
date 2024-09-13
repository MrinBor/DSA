# include<stdio.h>
# include<malloc.h>


typedef struct 
{
    unsigned int read    :1;
    unsigned int write   :1;
    unsigned int execute :1;
    /* data */
}Permissions;

void printPermissions(Permissions p)
{
    printf("\nPermissions are as follows : \n");
    printf("\nRead   :%u : \n",p.read);
    printf("\nWrite  :%u : \n",p.write);
    printf("\nExecute:%u : \n",p.execute);
}

//The cahnging of the permission
//Pointer to permissions varaible
//We will have the following

void changePermission(Permissions *p,unsigned int newread,unsigned int newwrite,unsigned int newexecute)
{
    p->read = newexecute;
    p->write = newwrite;
    p->execute = newexecute;

}
 

int main()
{
    Permissions file1 = {1,1,0};
    printPermissions(file1);

    changePermission(&file1,1,1,1);
    printPermissions(file1);
    return 0;
}

// Function needed for the to do process
/**
 * 
 * The permission to a particular file
 * 
 * Simply crreating the variables which describes the functioning of a file 
 * 
 * The function with read, write and execute permissions
 * @brief
 * We can also remove the variable
 * Required in part 1
 *
 *
 * Part 2
 * Function / the main inside of the main function
 *
 * @return int
 */