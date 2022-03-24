#include<stdio.h>

//Beecrowd-1073

int main()
{

    int n;
    scanf("%d", &n);

    for(int i =1; i <= n; i++){
        if(!(i&1)){
            printf("%d^%d = %d\n",i,i,i*i);
        }
    }

    return 0;
}
