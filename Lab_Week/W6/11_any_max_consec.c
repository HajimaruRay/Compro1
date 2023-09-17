#include <stdio.h>

void main()
{
   int userN,userL,userLo,countL = 1,totalL = 0;

    while (1)
    {
        scanf("%d",&userN);

        if (userN == userL)
        {
            countL++;

        }
        if (countL > totalL)
        {
            totalL = countL;
            userLo = userN;
        }
        if (userN != userL)
        {
            countL = 1;
        }

        if (userN == 0)
        {
            break;
        }
        userL = userN;
    }
    printf("%d\n",totalL);
    printf("%d",userLo);
}
