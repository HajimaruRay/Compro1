#include <stdio.h>

void main()
{
    int x,y,z,i,a;
    scanf("%d%d%d",&x,&y,&z);

    // less
    if (x < y && x < z)
    {
        i = x;
    }
    else if (y < z)
    {
        i = y;
    }
    else 
    {
        i = z;
    }

    //more
    if (x > y && x > z)
    {
        a = x;
    }
    else if (y > z)
    {
        a = y;
    }
    else 
    {
        a = z;
    }

    //loop for print
    while (i <= a)
    {
        if (i == x)
        {
            printf("%d ",i);
            i++;
            continue;
        }
        if (i == y)
        {
            printf("%d ",i);
            i++;
            continue;
        }
        if (i == z)
        {
            printf("%d ",i);
            i++;
            continue;
        }
        i++;
    }
}
