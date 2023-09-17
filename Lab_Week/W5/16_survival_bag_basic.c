#include <stdio.h>

int main()
{
    int x, y, z, i = 0; 
    scanf("%d%d%d", &x, &y, &z);

    while (x >= 3 && y >= 4 && z >= 2)
    {
        x = x - 3;
        y = y - 4;
        z = z - 2;
        i++;
    }
    printf("%d %d %d %d\n", i, x, y, z);
    
    return 0;
}
