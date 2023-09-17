#include <stdio.h>

void main()
{
    int start,stop,multi;
    int pass = 0;

    scanf("%d%d%d",&start,&stop,&multi);

    if (start > stop)
    {
        pass = stop;
        stop = start;
        start = pass;
    }

    for (int i = start;i <= stop;i++)
    {
        printf("%d: ",i);

        for (int j = 1;j <= multi;j++)
        {
            printf("%d ",i * j);
        }
        printf("\n");
    }
}
