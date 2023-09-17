#include <stdio.h>

void main()
{
    int people,order,orderpice;
    int cando = 0,day = 0,i = 0,sumP = 0;
    
    scanf("%d%d",&people,&order);
    cando = people * 100;

    while (i < order)
    {
        scanf("%d",&orderpice);
        sumP += orderpice;
        day = ((sumP+cando) - 1)/cando;
        printf("%d\n",day);
        i++;
    }
}