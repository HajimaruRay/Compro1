#include <stdio.h>

void main()
{
    int a,b,c;
    int all[255];
    int count = 0,fixa = 0,i = 0,Sum = 0;

    scanf("%d%d%d",&a,&b,&c);
    all[0] = a;
    fixa = a;

    for (;i < 255;i++)
    {
        if (a <= b && count == 0)
        {
            all[i+1] = a*c;
            a = all[i+1];
            Sum += all[i];
            continue;
        }
        count++;
        break;
    }

    for (i = i-1;i > 0;i--)
    {
        Sum += all[i-1];
        all[i] = a/c;
        a = all[i];
    }
    printf("%d",Sum);
}