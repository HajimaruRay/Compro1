#include <stdio.h>

void main()
{
    int n;
    int space = 0,baseN = 0;
    //>10var
    int NmodT = 0,NHarT = 0,loop09 = 9;

    scanf("%d",&n);
    baseN = n;
    for (int i = 0;i < baseN;i++)
    {
        NmodT = n%10;
        for(int s = 0;s < space;s++)
        {
            printf(" ");
        }
        space++;
        for (int j = 0;j < n;j++)
        {
            printf("%d",NmodT);
        }
        printf("\n");
        n--;
    }
}