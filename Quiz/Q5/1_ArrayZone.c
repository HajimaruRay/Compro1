#include <stdio.h>

int a[1000][1000];
void main()
{
    int sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;
    int r,c;
    scanf("%d%d",&r,&c);

    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0;i < r/2;i++)
    {
        for (int j = 0;j < c/2;j++)
        {
            sum1 += a[i][j];
        }
    }
    for (int i = 0;i < r/2;i++)
    {
        for (int j = c/2;j < c;j++)
        {
            sum2 += a[i][j];
        }
    }
    for (int i = r/2;i < r;i++)
    {
        for (int j = 0;j < c/2;j++)
        {
            sum3 += a[i][j];
        }
    }
    for (int i = r/2;i < r;i++)
    {
        for (int j = c/2;j < c;j++)
        {
            sum4 += a[i][j];
        }
    }

    printf("%d %d\n%d %d",sum1,sum2,sum3,sum4);


}
