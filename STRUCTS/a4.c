# include<stdio.h>

typedef struct Date
{
    int day;
    int month;
    int year;
}dt;


//Now we will have 

void PrintCurrDate(dt dt)
{
    printf("\n\nThe current date ->> %d/%d/%d",dt.day,dt.month,dt.year);
}

void PrintUpdatedDay(dt dt)
{
    dt.day = dt.day+ 1;

    if(dt.day>31)
    {
        dt.day = 1;
        dt.month++;
        if(dt.month>12)
        {
            dt.month =1;
            dt.year++;
        }
    }
    printf("\n\nThe current date ->> %d/%d/%d", dt.day, dt.month, dt.year);
}



int main()
{
    dt d1;
    d1.day = 1;
    d1.month = 11;
    d1.year = 2003;

    PrintCurrDate(d1);

    d1.day = 31;
    d1.month =12;
    d1.year = 2003;
    PrintUpdatedDay(d1);
}

