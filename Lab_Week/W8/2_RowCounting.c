#include <stdio.h>

void main()
{
    int c,r;
    int count = 0;
    scanf("%d%d",&c,&r);
    for (int j = 0;j < c;j++)
    {
        for (int i = 0;i < r;i++)
        {
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
}
