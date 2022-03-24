#include<stdio.h>

//Beecrowd-1132

int main(){

    int x,y,mx,mi,sum=0;
    scanf("%d %d",&x,&y);

    if(x>y){
        mx=x;
        mi=y;
    }
    else{
        mx=y;
        mi=x;
    }

    for(int i=mi;i<=mx;i++){
        if(i%13){
            sum+=i;
        }
    }

    printf("%d\n",sum);


    return 0;
}