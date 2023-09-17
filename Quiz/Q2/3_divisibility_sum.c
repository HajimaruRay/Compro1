#include <stdio.h>

void main()
{
   int x,y,userN;
   int canx = 0,cany = 0,canxory = 0;

    scanf("%d%d",&x,&y);

    while (1)
    {
        scanf("%d",&userN);

        if (userN <= 0)
        {
            break;
        }
        if (userN % x == 0 && userN % y != 0)
        {
            canx+=userN;
        }

        if (userN % x != 0 && userN % y == 0)
        {
            cany+=userN;
        }

        if (userN % x == 0 || userN % y == 0)
        {
            canxory+=userN;
        }
    }
    printf("%d\n%d\n%d\n",canx,cany,canxory);
}