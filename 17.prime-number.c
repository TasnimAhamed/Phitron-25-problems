#include<stdio.h>

//Beecrowd-1165

int main()
{

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int paisi=1;

        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                paisi=0;
                break;
            }
        }

        if(paisi){
            printf("%d eh primo\n",n);
        }
        else{
            printf("%d nao eh primo\n",n);
        } 
    }


    return 0;
}