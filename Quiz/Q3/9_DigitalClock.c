#include <stdio.h>

void main()
{
    int hourS,minS,hourP,minP;
    int i = 0,j = 0;

    scanf("%d%d%d%d",&hourS,&minS,&hourP,&minP);

    for (i = hourS;i <= hourP;i++)
    {
        if (hourP>hourS)
        {
            for(j = minS;j <=59;j++)
            {
                printf("%d:%02d",i,minS);
                minS++;
                if (minS == 60)
                {
                    minS = 0;
                    hourS++;
                }
                printf("\n");
            }
        }
        else if(hourP==hourS)
        {
            for(j=minS;j<=minP;j++)
            {
                printf("%d:%02d",i,j);
                printf("\n");
            }
        }
    }
}
