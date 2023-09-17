#include <stdio.h>

void main()
{
    int k,k1,k2,s1,s2,g;  // Initialize i to 0
    scanf("%d%d%d%d%d%d",&k,&k1,&k2,&s1,&s2,&g);

    if( k1 < k)
    {
        if (s1 == s2 && s1 >= 9 && s2 >= 9 && g == 1) 
        {
            printf("1");
        }
        else if (s1 == s2 && s1 >= 9 && s2 >= 9 && g == 2) 
        {
            printf("2");
        }
        else if (s1 >= 9 )
        {
            printf("1");
        }
        else if (s2 >= 9)
        {
            printf("2");
        }
    }
    
    else if( k2 < k)
    {
        if (s1 == s2 && s1 >= 9 && s2 >= 9 && g == 1) 
        {
            printf("1");
        }
        else if (s1 == s2 && s1 >= 9 && s2 >= 9 && g == 2) 
        {
            printf("2");
        }
        else if (s1 >= 9)
        {
            printf("1");
        }
        else if (s2 >= 9)
        {
            printf("2");
        }
    }
    
    else
    {
        printf("0");
    }
}
