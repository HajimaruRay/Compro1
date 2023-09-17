#include <stdio.h>

void main()
{
    int k,x;
    int all = 0,TK = 0,TKSum = 0;
    // all = all the number TK = Can/K TKSum = CanT/k all
    
    scanf("%d",&k);

    while (1)
    {
        scanf ("%d",&x);

        if (x == 0)
        {
            break;
        }
        else
        {
            all++;

            if (x % k == 0 && x > 0)
            {
                TK++;
                TKSum += x;
            }
        }
    }

    printf("%d\n%d\n%d",all,TK,TKSum);


}