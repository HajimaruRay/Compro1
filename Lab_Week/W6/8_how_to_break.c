#include <stdio.h>

void main()
{
   int x,i = 0;

   while (1)
   {
    scanf("%d",&x);
    if (x == 0)
    {
        break;
    }
    i++;
   }
   printf("%d",i);
}
