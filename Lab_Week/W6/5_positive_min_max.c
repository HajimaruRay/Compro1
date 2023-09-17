#include <stdio.h>

void main()
{
    int x;
    int i = 0,min,max = 0;

    while (i < 8)
    {
        scanf("%d",&x);

        if ( x != 0 && x > 0 )
        {
            if ( x > max )
            {
                max = x;
            }

            if ( x < min )
            {
                min = x;
            }
        }
        i++;
    }

    printf("\n%d\n%d",max,min);
}
