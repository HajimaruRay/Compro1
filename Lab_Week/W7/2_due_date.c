#include <stdio.h>

void main()
{
   int k,n,order;
   int i = 0,canD = 0,sum = 0,day = 0;
   scanf ("%d%d",&k,&n);
   canD = 100 * k;

   while (i < n)
   {
        scanf("%d",&order);
        sum += order;
        day = (sum + canD-1)/canD;
        printf("%d\n",day);
        i++;
   }
}
