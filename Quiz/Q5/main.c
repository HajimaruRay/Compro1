#include <stdio.h>

int same[2][1000000],countS[1000000];
void main()
{
    int number;
    int count = 0,Gmost = 0,GcountS = 0;

    for (int i = 0;i < 1000000;i++)
    {
        same[0][i] = 0;
        same[1][i] = 0;
        countS[i] = 0;
    }


    for (;;)
    {

        scanf("%d",&number);
        if (number < 1)
        {
            break;
        }
        else
        {
            count++;
        }

        for (int j = 0;j < 1000000;j++)
        {
            if (number != same[0][j])
            {
                if (same[0][j] == 0)
                {
                    same[0][j] = number;
                    same[1][j]++;
                    break;
                }
            }
            else
            {
                same[1][j]++;
                countS[j]++;
                break;
            }
        }
    }
    for (int i = 0;i < 1000000;i++)
    {
        if (countS[i] == 0)
        {
            break;
        }
        if (GcountS < countS[i]);
        {
            printf("%d < %d\n",GcountS,countS[i]);
            GcountS = countS[i];
            Gmost = i;
            printf("Gmost = %d\n",Gmost);

        }
    }
    printf("\n%d\n",count);
    printf("%d",same[0][Gmost]);
}
