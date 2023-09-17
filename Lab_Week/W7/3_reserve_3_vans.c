#include <stdio.h>

void main()
{
  int n,t,i = 0;
  int a = 0,b = 0,c = 0;

  scanf("%d",&n);

  while (i < n)
  {

    scanf("%d",&t);

    if (a <= b && a <= c)
    {
        printf("A\n");
        a +=  t;
    }
    else if (b < a && b <= c)
    {
        printf("B\n");
        b += t;
    }
    else if (c < a && c < b)
    {
        printf("C\n");
        c += t;
    }

    i++;
  }
}
