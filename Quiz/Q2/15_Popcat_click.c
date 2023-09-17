#include <stdio.h>

void main()
{
    int click,n;
    int i = 0,th = 0,ta = 0,ma = 0,fi = 0;
    scanf("%d",&n);

    while (i < n)
    {
        scanf("%d",&click);

        if (click == 1)
        {
            th++;
        }
        else if (click == 2)
        {
            ta++;
        }
        else if (click == 3)
        {
            ma++;
        }
        else if (click == 4)
        {
            fi++;
        }
        i++;
    }

    if (fi > th && fi > ta && fi > ma)
    {
        printf("Finland won with a score of %d",fi);
    }
    else if (ma > fi && ma > ta && ma > th)
    {
        printf("Malaysia won with a score of %d",ma);
    }
    else if (ta > fi && ta > th && ta > ma)
    {
        printf("Taiwan won with a score of %d",ta);
    }
    else if (th > ta && th > ma && th > fi)
    {
        printf("Thailand won with a score of %d",th);
    }
}