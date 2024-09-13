# include<stdio.h>


typedef struct Records
{
    int roll;
    int id;
    char Name[20];
}rc;

rc GetDatat()
{
    rc r1;
    printf("Enter the roll number of the student \n");
    scanf("%d",&r1.roll);

    printf("Enter the id of the student\n");
    scanf("%d",&r1.id);

    printf("Enter the Name of the student \n");
    scanf("%s",&r1.Name);

    return r1;
}

void Print_Data(rc disp)
{
    printf("\nRoll->%d | Id->%d | Name->%s\n",disp.roll,disp.id,disp.Name);
}

int main()
{
    int a;
    printf("Enter the number of records you want to enter \n");
    scanf("%d",&a);

    rc rec[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the records for (%d) \n",(i+1));
        rec[i] = GetDatat();
        /* code */
    }

    for (int i = 0; i < a; i++)
    {
        Print_Data(rec[i]);
        /* code */
    }
    
    
}