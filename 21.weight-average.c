#include<stdio.h>

//Beecrowd-1079

int main()
{

    int t;
    scanf("%d", &t);

    while (t--){
        double a,b,c,avg;
        scanf("%lf %lf %lf", &a, &b, &c);

        avg=(a*2.0+b*3.0+c*5.0)/10.0;

        printf("%.1f\n",avg);
    }


    return 0;
}