#include <stdio.h>

void main()
{
    int number,GetN;
    int OI = 0,IO = 0,II = 0,OO = 0;

    while (1)
    {
        
        scanf("%d",&number);
        if (number != 0 && number != 1)
        {
            break;
        }

        if (GetN == 0 && number == 0)
        {
            OO++;
        }
        else if (GetN == 0 && number == 1 )
        {
            OI++;
        }
        else if (GetN == 1 && number == 0)
        {
            IO++;
        }
        else if (GetN == 1 && number == 1)
        {
            II++;
        }
        GetN = number;
    }

    printf("%d\n%d\n%d\n%d",OO,OI,IO,II);
}