#include <stdio.h>

void main()
{
   int n[100];
   int i = 0;

   for(;;)
   {
        i++;
        scanf("%d",&n[i]);
        if (n[i] <= 0)
        {
            break;
        }
   }

    for (int j = 1;j < i;j++)
    {
        for (int a = 0;a < n[j];a++)
        {
            printf("*");
        }
        printf("\n");
    }
}