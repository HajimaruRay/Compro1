#include <stdio.h>

void main()
{
   int target,userN,totalS = 0,Long = 0,totalL = 0;

    scanf("%d",&target);
    while (1)
    {
        scanf("%d",&userN);

        if (userN == target)
        {
            totalS++;
            Long++;
        }
        else if (userN != target)
        {
            Long = 0;
        }

        if (totalL <= Long)
        {
            totalL = Long;
        }
        
        if (userN == 0)
        {
            break;
        }
    }

    printf("\n%d",totalL);
    printf("\n%d",totalS);
}
