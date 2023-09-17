#include <stdio.h>

void main()
{
    int hour,DayToWork;
    int tire = 0,i = 0,over = 0,money = 0;
    scanf("%d",&DayToWork);

    while (i < DayToWork)
    {
        scanf("%d",&hour);

        if (hour >= 8)
        {
            money += 300;
        }
        else if (hour >= 4 && hour < 8)
        {
            money += 150;
        }

        if (hour > 8)
        {
            if (hour > 12)
            {
                hour = 12;
            }
            while (hour > 8)
            {
                money += 50;
                hour--;
            }
        }
        if (hour < 4)
        {
            tire++;
        }
        else if (hour > 4)
        {
            tire = 0;
        }
        if (tire == 3)
        {
            break;
        }
        i++;

    }

    printf("%d",money);
}