#include <stdio.h>

void main()
{
    int x;
    scanf("%d",&x);


    if (x%3==0&&x%5==0)
    {
        printf("3 5");
    }
    else if(x%3==0)
    {
        printf("3");
    }
    else if(x%5==0)
    {
        printf("5");
    }

}
