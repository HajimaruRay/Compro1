#include <stdio.h>

void main()
{
    double x,h,m;
    double total = 0,time = 0;

    scanf("%lf%lf%lf",&x,&h,&m);
    h = h*60;
    time = (h+m)/60;
    total = x*time;

    if (total >= 0)
    {
        printf("%.1lf",total);
    }
    else
    {
        total = -1 * total;
        printf("%.1lf\nreverse",total);
    }
}