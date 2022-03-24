#include<stdio.h>

int main()
{
    for(int i=1000;i>=1;i--){
        if(i%5==1){
            printf("%d\n",i);
        }
        else{
            printf("%d\t",i);
        }
    }

    return 0;
}