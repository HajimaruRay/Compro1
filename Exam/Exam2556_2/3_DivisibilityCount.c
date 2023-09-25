#include <stdio.h>

void main()
{
    int x,y,n;
    int countx = 0,county = 0,firstx = 0,firsty = 0;
    
    scanf("%d%d",&x,&y);

    for(;;)
    {
        scanf("%d",&n);
        if (n <= 0)
        {
            break;
        }
        if (n % x == 0 && n % y == 0)
        {
            countx++;
            county++;
            if (firstx == 0 && firsty == 0)
            {
                firstx++;
                firsty++;
            }
        }
        else if (n % x == 0)
        {
            countx++;
            if (firstx == 0 && firsty == 0)
            {
                firstx++;
            }
        }
        else if (n % y == 0)
        {
            county++;
            if (firstx == 0 && firsty == 0)
            {
                firsty++;
            }
        }
    }
    if (firstx == 1 && firsty == 0)
    {
        printf("%d\n%d\nx",countx,county);
    }
    else if (firstx == 0 && firsty == 1)
    {
        printf("%d\n%d\ny",countx,county);
    }
    else if (firstx == 1 && firsty == 1)
    {
        printf("%d\n%d\nxy",countx,county);
    }
}