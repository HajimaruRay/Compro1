#include <stdio.h>

void main()
{
   int target,x,i = 0;

    scanf("%d",&target);
    while (1)
    {
        scanf("%d",&x);
        if (x == target)
        {
            i++;
        }
        if (x == 0)
        {
            break;
        }
    }
    if( i != 0)
    {
        printf("%d",i);
    }
    else
    {
        printf("None");
    }
}
