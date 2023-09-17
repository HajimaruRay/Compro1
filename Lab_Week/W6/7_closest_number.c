#include <stdio.h>
#include <limits.h>

void main()
{
    int baseinput, loopinput, diff;
    int close = 0, minDiff = INT_MAX, i = 0;

    scanf("%d", &baseinput);

    while (i < 8)
    {
        scanf("%d", &loopinput);

        diff = baseinput - loopinput;

        if (diff < 0)
        {
            diff *= -1;
        }

        if (diff < minDiff)
        {
            minDiff = diff;
            close = loopinput;
        }

        i++;
    }

    printf("%d",close);

}
