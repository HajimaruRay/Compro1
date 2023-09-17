#include <stdio.h>

void main()
{
    double x,y,z;
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);

    if (z == 0)
    {
        printf("cannot divide by zero");
    }
    else
    {
        x = x+y;
        printf("%lf",x/z);
    }

}
