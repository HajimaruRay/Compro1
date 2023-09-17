#include <stdio.h>

void main()
{
    int pa1,pa2,pa3,pa4;
    int sc1,sc2,sc3,sc4;
    int count = 0;

    scanf("%d%d%d%d",&pa1,&pa2,&pa3,&pa4);
    scanf("%d%d%d%d",&sc1,&sc2,&sc3,&sc4);

    if (pa1 <= sc1)
    {
        printf("1 ");
        count++;
    }
    if (pa2 <= sc2)
    {
        printf("2 ");
        count++;
    }
    if (pa3 <= sc3)
    {
        printf("3 ");
        count++;
    }
    if (pa4 <= sc4)
    {
        printf("4 ");
        count++;
    }
    if (pa1 >= sc1 && pa2 >= sc2 && pa3 >= sc3 && pa4 >= sc4)
    {
        printf("0");
    }

    if (count > 2)
    {
        printf("\npass");
    }
    else
    {
        printf("\nfail");
    }
}