#include<stdio.h>
//Beecrowd-1019
int main()
{

    int time;
    scanf("%d", &time);
    int hour=time/3600;
    time%=3600;
    int minute=time/60;
    time%=60;

    printf("%d:%d:%d\n",hour,minute,time);


    return 0;
}