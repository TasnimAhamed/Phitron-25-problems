#include<stdio.h>

//Beecrowd-1020

int main()
{

    int days;
    scanf("%d", &days);

    int year = days/365;
    days%=365;
    int month = days/30;
    days%=30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);

    return 0;
}