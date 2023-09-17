#include <stdio.h>

void main()
{
    int x, even = 0, odd = 0;
    for (int i = 1; i <= 8;i++)
    {
        scanf("%d",&x);

        if (x%2 == 0)
        {
            even += x;
        }

        else
        {
            odd += x;
        }
    }

    if (odd > even)
    {
        printf("odd\n");
    }
    else if (even > odd)
    {
        printf("even\n");
    }
    else
    {
        printf("equal\n");
    }

    printf("%d\n%d",even,odd);
}
