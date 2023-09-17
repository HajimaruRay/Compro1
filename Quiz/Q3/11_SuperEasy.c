#include<stdio.h>

void main()
{
    int start[100],stop[100],n;
    int pass = 0;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++)
    {
        scanf("%d%d",&start[i],&stop[i]);
        if (start[i] > stop[i])
        {
            pass = stop[i];
            stop[i] = start[i];
            start[i] = pass;
        }
        for (int j = start[i];j <= stop[i];j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
