#include <stdio.h>

void main()
{
    int x;
    scanf("%d",&x);

    if (x >= 80)
    {
        printf("Excellent");
    }
    else if (x >= 40)
    {
        printf("Pass");
    }
    else if (x < 40)
    {
        printf("Fail");
    }

}
