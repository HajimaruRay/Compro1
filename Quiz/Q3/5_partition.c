#include <stdio.h>

void main()
{
    int w,n;
    int count = 0;

    scanf("%d%d",&w,&n);

    for (int j = 0; j < 3;j++)
    {
        for (int i = 0;i < ((w*n)+(n+1));i++)
        {
            if (j == 0 || j == 2 || i%(w+1)==0 )
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }
    }
