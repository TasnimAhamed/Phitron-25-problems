#include<stdio.h>

//Beecrowd-1133

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    for(int i=x+1;i<y;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
    return 0;
}