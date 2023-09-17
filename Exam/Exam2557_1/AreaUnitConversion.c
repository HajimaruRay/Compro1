#include <stdio.h>

void main()
{
    int Rai,Waa;

    scanf("%d%d",&Rai,&Waa);

    while (Waa >= 400)
    {
        Waa -= 400;
        Rai++;
    }

    if (Rai > 0 && Waa > 0)
    {
        printf("\n%d r %d w",Rai,Waa);
    }
    else if (Rai > 0)
    {
        printf("\n%d r ",Rai);
    }
    else if (Waa > 0)
    {
        printf("\n%d w ",Waa);
    }
}
    