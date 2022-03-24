#include<stdio.h>

//Beecrowd-1008

int main()
{
    int employee_no,work_hour;
    scanf("%d %d",&employee_no,&work_hour);
    double salary,amount_per_hour;
    scanf("%lf",&amount_per_hour);

    salary = work_hour*amount_per_hour;

    printf("NUMBER = %d\n", employee_no);
    printf("SALARY = U$ %.2f\n", salary);



    return 0;
}