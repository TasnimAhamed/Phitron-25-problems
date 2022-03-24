#include<stdio.h>

//Beecrowd-1074

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int n;
        scanf("%d", &n);

        if(n == 0){
            printf("NULL\n");
        }
        else if(n>0){
            if(n&1){
                printf("ODD POSITIVE\n");
            }
            else{
                printf("EVEN POSITIVE\n");
            }
        }
        else{
            if(n&1){
                printf("ODD NEGATIVE\n");
            }
            else{
                printf("EVEN NEGATIVE\n");
            }
        }


    }


    return 0;
}