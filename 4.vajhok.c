#include<stdio.h>

int main()
{
    int t,tt=1;
    scanf("%d", &t);

    while(t--){

        int n;
        scanf("%d", &n);
        printf("case %d:",tt);

        for(int i=1;i<=n;i++){
            if(n%i==0){
                printf(" %d",i);
            }
        }
        printf("\n");
        tt++;

    }


    return 0;
}