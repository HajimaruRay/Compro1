#include <stdio.h>

void main()
{
    int x,y,z,i = 0,round;
    scanf("%d",&round);
    while (i < round)
    {
        scanf("%d%d%d",&x,&y,&z);

        if (x == y && x == z)
        {
            printf("xyz\n");
        }
        else if (x == y)
        {
            printf("xy\n");
        }
        else if (x == z)
        {
            printf("xz\n");
        }
        else if ( y == z)
        {
            printf("yz\n");
        }
        else if (x > y && x > z)
        {
            printf("x\n");
        }
        else if (y > x && y > z)
        {
            printf("y\n");
        }
        else if (z > x && z > y)
        {
            printf("z\n");
        }
        i++;
    }
}
