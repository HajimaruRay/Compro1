#include <stdio.h>
#include <limits.h>

void main()
{
    int number;
    int numberMod = INT_MAX, numberSqu = INT_MAX,sathu = 0;

    scanf("%d",&number);
    numberSqu = number;
    while(numberSqu != 0)
    {
        numberMod = numberSqu % 10;
        numberSqu = numberSqu / 10;
        if (numberMod == 9)
        {
            printf("SATHU ");
            sathu++;
        }
    }

    if (sathu == 9)
    {
        printf("\nOHH! Serious SATHU");
    }
    else if (sathu == 0)
    {
        printf("Hope to find SATHU next time");
    }
}
