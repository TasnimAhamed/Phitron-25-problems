#include<stdio.h>

int main()
{   
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        if(n&1){
            printf("odd\n");
        }else{
            printf("even\n");
        }
    }

    return 0;
}