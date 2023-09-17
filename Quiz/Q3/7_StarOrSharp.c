#include <stdio.h>

void main()
{
    int n,k;
    int i = 0;

    scanf("%d",&n);

    while (i < n)
    {
        scanf("%d",&k);
        if (k%2 == 0)
        {
            for (int a = 0;a < k;a++)
            {
                printf("#");
            }
            printf("\n");
        }
        else{
            for (int a = 0;a < k;a++)
            {
                printf("*");
            }
            printf("\n");
        }
        i++;
    }
}
