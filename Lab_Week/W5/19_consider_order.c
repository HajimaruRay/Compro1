#include <stdio.h>

void main()
{
    int x,y,m,n,a,b;  // x = ไม้แผ่น y =  ไม้เเท่ง m = โต๊ะใหญ่ n = โต๊ะเล็ก
    scanf("%d%d",&x,&y);
    scanf("%d%d",&m,&n);

   a = (2*m) + (1*n);
   b = (6*m) + (4*n);

    if ( x >= a && y >=b)
    {
        printf("Yes ");
        x -= a;
        y -= b;
        printf("%d %d",x,y);
    }

    else
    {
        printf("No ");
        x = -1*(x-a);
        y = -1*(y-b);

        if (x < 0)
        {
            x = 0;
        }
        else if (y < 0)
        {
            y = 0;
        }
        printf("%d %d",x,y);
    }
    

}
