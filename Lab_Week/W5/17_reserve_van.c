#include <stdio.h>

void main()
{
   int day1,day2,day3;
   scanf("%d%d%d",&day1,&day2,&day3);

    if (day1 < day2 && day1 < day3 || day1 == day2 && day1 < day3|| day1 == day3 && day1 < day2 || day1 == day2 && day1 == day3)
    {
        printf("A");
    }
    else if (day2 < day3 || day2 == day3)
    {
        printf("B");
    }
    else 
    {
        printf("C");
    }
}
