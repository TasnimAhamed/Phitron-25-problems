#include<stdio.h>

//Beecrowd-1113

int main()
{

    int x,y;

    while(true){
        scanf("%d %d",&x,&y);
        if(x==y)break;
        else if(x>y) printf("Decrescente\n");
        else printf("Crescente\n");
    }


    return 0;
}