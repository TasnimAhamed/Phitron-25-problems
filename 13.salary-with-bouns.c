#include<stdio.h>

//Beecrowd-1009

int main()
{
    char name[1024];
    gets(name);
    double salary,sale;
    scanf("%lf %lf", &salary, &sale);

    salary+=(sale*0.15);

    printf("TOTAL = R$ %.2f\n",salary);

    return 0;
}