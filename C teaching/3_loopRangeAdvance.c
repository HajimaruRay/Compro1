#include<stdio.h>

void main()
{
    int n,start,stop;

    scanf("%d",&n);

    for(int i = 0;i < n;i++)
    {
        scanf("%d%d",&start,&stop);

        if (start < stop)
        {
            for (int j = start;j <= stop;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
        else
        {
            printf("Invoid Input\n");
        }
    }
}