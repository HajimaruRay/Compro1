#include <stdio.h>

void main()
{
    int c,r;

    scanf("%d%d",&c,&r);

    for (int j = 0;j < c;j++)
    {
        for (int i = 0;i < r;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}