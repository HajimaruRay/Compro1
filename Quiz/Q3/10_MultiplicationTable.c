#include <stdio.h>

void main()
{
    int start,stop,multiS,multiP;
    int pass = 0;

    scanf("%d%d%d%d",&start,&multiS,&stop,&multiP);

    if (start > stop)
    {
        pass = stop;
        stop = start;
        start = pass;
    }

    for (int i = start;i <= stop;i++)
    {
        if (i == start)
        {
            for (int j = multiS;j <= multiP;j++)
            {
                printf("%d x %d = %d\n",i,j,i*j);
            }
        }
        else if (i < stop)
        {
            for (int j = 1;j <= multiP;j++)
            {
                printf("%d x %d = %d\n",i,j,i*j);
            }
        }
        else if (i == stop)
        {
            for (int j = 1;j <= multiS;j++)
            {
                printf("%d x %d = %d\n",i,j,i*j);
            }
        }
    }
}
