#include <stdio.h>

void main()
{
    int people,col;
    int colf = 0;

    scanf("%d%d",&people,&col);
    colf = col;

    for (;;)
    {
        if (people <= 0)
        {
            break;
        }
        else if (people - colf >= 0)
        {
            for (int i = 0;i < colf;i++)
            {
                printf("* ");
            }
            people -= colf;
        }
        else
        {
            colf = col/2.0;
            for (int i = 0;i < colf;i++)
            {
                printf("* ");
            }
            people -= colf;
        }
        printf("\n");
    }
}