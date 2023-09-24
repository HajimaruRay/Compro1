#include <stdio.h>

void main()
{
    int r,c;

    scanf("%d%d",&r,&c);
    for (int i = 0;i <= r;i++)
    {
        for (int j = 0;j <= c;j++)
        {
            printf("(%d, %d) ",i,j);
        }
        printf("\n");
    }
}
