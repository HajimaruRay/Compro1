#include <stdio.h>

void main()
{
    int pa1,pa2,pa3,pa4;
    int sc1,sc2,sc3,sc4;
    int n;
    int count = 0,i = 0;
    int passC = 0,pa1C = 0,pa2C = 0,pa3C = 0,pa4C = 0;

    scanf("%d%d%d%d",&pa1,&pa2,&pa3,&pa4);
    scanf("%d",&n);

    while (i < n)
    {
        scanf("%d%d%d%d",&sc1,&sc2,&sc3,&sc4);

        if (pa1 <= sc1)
        {
            count++;
            pa1C++;
        }
        if (pa2 <= sc2)
        {
            count++;
            pa2C++;
        }
        if (pa3 <= sc3)
        {
            count++;
            pa3C++;
        }
        if (pa4 <= sc4)
        {
            count++;
            pa4C++;
        }

        if (count > 2)
        {
            printf("pass\n");
            passC++;
        }
        else
        {
            printf("fail\n");
        }
        count = 0;
        i++;
    }

    printf("%d\n",passC);
    printf("%d %d %d %d",pa1C,pa2C,pa3C,pa4C);

    
}