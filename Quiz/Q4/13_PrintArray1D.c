#include <stdio.h>

void main()
{
    int n,x;
    scanf("%d",&n);
    int number[n+1];

    for (int i = 1;i <=n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d",&x);
    for (int i = 1;i <= n;)
    {
        printf("%d ",number[i]);
        i += x;
    }
}
