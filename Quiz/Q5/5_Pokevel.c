#include <stdio.h>

struct
{
    double code;
    char name[52];
    int level[9];
}typedef Datapokedex;

Datapokedex pokedex[200];
void main()
{
    int n,k;
    double codepoke = 0;
    int levelpoke = 0;
    scanf ("%d",&n);
    
    for (int i = 0;i < n;i++)
    {
        scanf("%lf%s",&pokedex[i].code,pokedex[i].name);
        for (int j = 1;j <= 8;j++)
        {
            scanf("%d",&pokedex[i].level[j]);
        }
    }

    scanf("%d",&k);
    for (int i = 0;i < k;i++)
    {
        scanf("%lf%d",&codepoke,&levelpoke);
        for (int j = 0;j < n;j++)
        {
            if (codepoke == pokedex[j].code)
            {
                printf("%s %d\n",pokedex[j].name,pokedex[j].level[levelpoke]);
                break;
            }
        }
    }
}
