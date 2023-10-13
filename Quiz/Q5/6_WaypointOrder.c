#include <stdio.h>

void main()
{
    int rol,col;
    
    scanf("%d%d",&rol,&col);
    int arr[rol+1][col+1];

    for (int i = 1;i < rol+1;i++)
    {
        for (int j = 1;j < col+1;j++)
        {
            arr[i][j] = 0;
        }
    }

    int k;
    scanf("%d",&k);
    int Prol[k],Pcol[k];
    for (int i = 1;i <= k;i++)
    {
        scanf("%d%d",&Prol[i],&Pcol[i]);
        arr[Prol[i]][Pcol[i]] = i;
    }

    for (int i = 1;i <= rol;i++)
    {
        for (int j = 1;j <= col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}