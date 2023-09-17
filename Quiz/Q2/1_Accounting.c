#include <stdio.h>

void main()
{
    int type,money;
    int revN = 0,expN = 0,rev = 0,exp = 0;

    while (1)
    {
        scanf("%d%d",&type,&money);

        if (type == 0)
        {
            break;
        }
        else if (type == 1)
        {
            rev += money;
            revN++;
        }
        else if (type == 2)
        {
            exp += money;
            expN++;
        }
    }

    printf("%d %d\n",revN,expN);
    printf("%d %d %d",rev,exp,rev - exp);
}