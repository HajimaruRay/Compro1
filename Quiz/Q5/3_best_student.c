#include <stdio.h>

struct
{
    char number[9];
    char name[31];
    char last[51];
    float grade;
} typedef student;

student foder[100];
void main()
{
    int n;
    float mostgrade = -1;
    int MostFoder = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%s%f", foder[i].number, foder[i].name, foder[i].last, &foder[i].grade);

        if (mostgrade < foder[i].grade)
        {
            mostgrade = foder[i].grade;
            MostFoder = i;
        }
    }

    printf("%s %s %s %.2f", foder[MostFoder].number, foder[MostFoder].name, foder[MostFoder].last, foder[MostFoder].grade);
}