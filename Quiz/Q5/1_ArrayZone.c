#include <stdio.h>

int processzone(int Starti,int Stopi,int Startj,int Stopj,int sum);
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

    sum1 = processzone(0,r/2,0,c/2,sum1);
    sum2 = processzone(0,r/2,c/2,c,sum2);
    sum3 = processzone(r/2,r,0,c/2,sum3);
    sum4 = processzone(r/2,r,c/2,c,sum4);

    printf("%d %d\n%d %d",sum1,sum2,sum3,sum4);

}

int processzone(int Starti,int Stopi,int Startj,int Stopj,int sum)
{
    for (int i = Starti;i < Stopi;i++)
    {
        for (int j = Startj;j < Stopj;j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}