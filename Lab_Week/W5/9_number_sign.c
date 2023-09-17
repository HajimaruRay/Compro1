#include <stdio.h>

void main()
{
    int x;
    scanf("%d",&x);

    if (x > 0)
    {
        printf("positive");
    }
    else if (x < 0)
    {
        printf("negative");
    }
    else if (x == 0)
    {
        printf("zero");
    }

}
