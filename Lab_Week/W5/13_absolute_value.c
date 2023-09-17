#include <stdio.h>

void main()
{
    int x;
    scanf("%d",&x);

    if (x >= 0)
    {
        printf("%d",x);
    }
    else if (x < 0)
    {
        x = -1*x;
        printf("%d",x);
    }

}

