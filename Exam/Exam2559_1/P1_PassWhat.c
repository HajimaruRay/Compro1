#include <stdio.h>

void main()
{
    int pa1,pa2,pa3,pa4;
    int sc1,sc2,sc3,sc4;

    scanf("%d%d%d%d",&pa1,&pa2,&pa3,&pa4);
    scanf("%d%d%d%d",&sc1,&sc2,&sc3,&sc4);

    if (pa1 <= sc1)
    {
        printf("1 ");
    }
    if (pa2 <= sc2)
    {
        printf("2 ");
    }
    if (pa3 <= sc3)
    {
        printf("3 ");
    }
    if (pa4 <= sc4)
    {
        printf("4 ");
    }
}