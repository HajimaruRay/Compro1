#include <stdio.h>

int number[100000];
void main()
{
    int OO = 0,OI = 0,IO = 0,II = 0;

    for(int i = 0;i < 100000;i++)
    {
        scanf("%d",&number[i]);

        if (number[i] != 0 && number[i] != 1)
        {
            break;
        }
        else if (i >= 1)
        {
            if (number[i-1] == 0 && number[i] == 0)
            {
                OO++;
            }
            else if (number[i-1] == 0 && number[i] == 1)
            {
                OI++;
            }
            else if (number[i-1] == 1 && number[i] == 0)
            {
                IO++;
            }
            else if (number[i-1] == 1 && number [i] == 1)
            {
                II++;
            }
        }
    }
    printf("%d\n%d\n%d\n%d",OO,OI,IO,II);
}