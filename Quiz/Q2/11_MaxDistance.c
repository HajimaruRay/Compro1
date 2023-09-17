#include <stdio.h>
#include <limits.h>

void main()
{
    int min,max,diff;
    int mostdiff = INT_MIN;

    while (1)
    {
        scanf("%d%d",&min,&max);
        diff = max - min;
        if (min == 0 && max == 0)
        {
            break;
        }
        else if (diff > mostdiff)
        {
            mostdiff = diff;
        }
    }

    printf("%d",mostdiff);
}