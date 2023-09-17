#include <stdio.h>

void main()
{
    int refereeGet,N,ScoreB,ScoreG,sex;
    int i = 1,refereeB = 0,refereeG = 0;

    scanf("%d",&N);
    scanf("%d",&refereeGet);

    while (i <= N)
    {
        scanf("%d%d%d",&sex,&ScoreB,&ScoreG);

        //กรณีทั้งสองคนคะเเนนเท่ากัน
        if ( ScoreB >= 9 && ScoreG >= 9)
        {
            if (refereeB < refereeGet && sex == 1) //ผู้ชาย
            {
                refereeB++;
                printf("%d 1\n",i);
            }
            else if (refereeG < refereeGet && sex == 2) //ผู้หญิง
            {
                refereeG++;
                printf("%d 2\n",i);
            }
            else if (refereeB < refereeGet && refereeG == refereeGet && sex == 2)  //เมื่อหญิงเต็มเเต่ชายเหลือเเละผู้เเข่งเป็นหญิง
            {
                refereeB++;
                printf("%d 1\n",i);
            }
            else if (refereeB == refereeGet && refereeG < refereeGet && sex == 1)  //เมื่อชายเต็มหญิงเหลือเเละผู้เข้าเเข่งเป็นชาย
            {
                refereeB++;
                printf("%d 2\n",i);
            }

        }
        else if ( ScoreB >= 9 && ScoreG < 9) //เมื่อคะเเนนชายได้เเต่หญงไม่ได้
        {
            if (refereeB < refereeGet)
            {
                refereeB++;
                printf("%d 1\n",i);
            }
        }
        else if ( ScoreG >= 9 && ScoreB < 9)  //คะเเนนหญิงได้เเต่ชายไม่ได้
        {
            if (refereeG < refereeGet)
            {
                refereeG++;
                printf("%d 2\n",i);
            }
        }
    i++;
    }
}
