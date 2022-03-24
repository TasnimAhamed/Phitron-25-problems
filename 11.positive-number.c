#include<stdio.h>

//Beecrowd-1060

int main()
{
    
    double n;
    int cnt=0;
    for(int i=0; i<6;i++){
        scanf("%lf",&n);
        if(n>0) cnt++;
    }

    printf("%d valores positivos\n",cnt);



    return 0;
}