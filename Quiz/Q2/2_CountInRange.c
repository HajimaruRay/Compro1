#include <stdio.h>

void main()
{
    int x,y,userN,rentx;
    int moreN = 0,lessN = 0,betweenN = 0;

    scanf("%d%d",&x,&y);
    
    if ( y < x)
    {
        rentx = x;
        x = y;
        y = rentx;
    }

    while (1)
    {
        scanf("%d",&userN);

        if (userN == 0)
        {
            break;
        }
        else if (x < userN && userN < y)
        {
            betweenN++;
        }
        else if (x > userN && y > userN)
        {
            lessN++;
        }
        else if (x < userN && y < userN)
        {
            moreN++;
        }

    }
    printf("%d\n%d\n%d\n",betweenN,lessN,moreN);
}