#include<stdio.h>

//Beecrowd-1014

int main()
{
    int distance;
    scanf("%d", &distance);

    double consumption,fuel;
    scanf("%lf", &fuel);

    consumption = (double)distance /fuel;

    printf("%.3f km/l",consumption);

    return 0;
}