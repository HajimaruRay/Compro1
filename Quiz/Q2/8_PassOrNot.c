#include <stdio.h>

void main()
{
    int sub1,sub2,sub3,sub4;
    int score1,score2,score3,score4;
    int pass = 0;

    scanf("%d%d%d%d",&sub1,&sub2,&sub3,&sub4);
    scanf("%d%d%d%d",&score1,&score2,&score3,&score4);

    if (score1 >= sub1)
    {
        printf("1 ");
        pass++;
    }
    if (score2 >= sub2)
    {
        printf("2 ");
        pass++;
    }
    if (score3 >= sub3)
    {
        printf("3 ");
        pass++;
    }
    if (score4 >= sub4)
    {
        printf("4 ");
        pass++;
    }
    if (score1 < sub1 && score2 < sub2 && score3 < sub3 && score4 < sub4)
    {
        printf("0 ");
    }
    if (pass > 2)
    {
        printf("\npass");
    }
    else
    {
        printf("\nfail");
    }
}
