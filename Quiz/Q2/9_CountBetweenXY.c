#include <stdio.h>

void main()
{
    int x,y,userN,borrow;
    int count = 0;

    scanf("%d%d",&x,&y);

    if (y < x)
    {
        borrow = x;
        x = y;
        y = borrow;
    }

    while (1)
    {
        scanf("%d",&userN);
        
        if (userN < 0)
        {
            break;
        }

        else if (x <= userN && userN <= y)
        {
            count++;
        }

    }

    printf("%d",count);
}