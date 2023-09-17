#include <stdio.h>

void main()
{
    int n;
    int space = 0,a = 0,newN = 0,i = 1;
    scanf("%d", &n);

    space = n/2;
    for (;i <= n;i += 2)
    {
        for (int s = 0;s < space;s++)
        {
            printf(" ");
        }
        space--;
        for (int j = 0;j < i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n-2;i > 0;i-=2)
    {
        a++;
        for (int s = 0;s < a;s++)
        {
            printf(" ");
        }
        for (int j = 0;j < i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
