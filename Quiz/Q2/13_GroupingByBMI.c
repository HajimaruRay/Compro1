#include <stdio.h>

void main()
{
    int N;
    int i = 0;
    int underC = 0, normalC = 0, overC = 0, obesC = 0;
    float under = 0, normal = 0, over = 0, obes = 0;
    float averUnder = 0, averNormal = 0, averOver = 0, averObes = 0;
    float percenUnder = 0, percenNormal = 0, percenOver = 0, percenObes = 0;
    float BMI = 0, kg, cm;

    scanf("%d", &N);

    while (i < N)
    {
        scanf("%f%f", &kg, &cm);
        BMI = kg / ((cm / 100) * (cm / 100));

        if (BMI < 18.5)
        {
            under += kg;
            underC++;
        }
        else if (BMI < 25)
        {
            normal += kg;
            normalC++;
        }
        else if (BMI < 30)
        {
            over += kg;
            overC++;
        }
        else if (BMI >= 30)
        {
            obes += kg;
            obesC++;
        }
        i++;
    }
        
        averUnder = under / underC;
        percenUnder = ((float)underC / (float)N) * 100;
        printf("Underweight %d %.2f %.2f%%\n", underC, averUnder, percenUnder);

        averNormal = normal / normalC;
        percenNormal = ((float)normalC / (float)N) * 100;
        printf("Normal weight %d %.2f %.2f%%\n", normalC, averNormal, percenNormal);
    
        averOver = over / overC;
        percenOver = ((float)overC / (float)N) * 100;
        printf("Overweight %d %.2f %.2f%%\n", overC, averOver, percenOver);

        averObes = obes / obesC;
        percenObes = ((float)obesC / (float)N) * 100;
        printf("Obesity %d %.2f %.2f%%\n", obesC, averObes, percenObes);

}
