#include <stdio.h>

void main()
{
    int x;
    scanf("%d",&x);

    x = x%100;
    x = x/10;

    printf("%1d",x);
}
