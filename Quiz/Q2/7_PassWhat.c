#include <stdio.h>

void main()
{
    int sub1,sub2,sub3,sub4;
    int score1,score2,score3,score4;

    scanf("%d%d%d%d",&sub1,&sub2,&sub3,&sub4);
    scanf("%d%d%d%d",&score1,&score2,&score3,&score4);

    if (score1 >= sub1)
    {
        printf("1 ");
    }
    if (score2 >= sub2)
    {
        printf("2 ");
    }
    if (score3 >= sub3)
    {
        printf("3 ");
    }if (score4 >= sub4)
    {
        printf("4 ");
    }
}
