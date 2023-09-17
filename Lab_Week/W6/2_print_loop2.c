#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);

    if (a > 0)
    {
        for(int i=1;i<=a;i++)
        {
            printf("%d\n",i);
        }
    }
    else 
    {
        printf("Invalid input");
    }
    
}
    
