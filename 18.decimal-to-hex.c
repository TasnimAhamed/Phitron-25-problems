#include<stdio.h>
#include<string.h>
#define ll long long int
//Beecrowd-1957

int main()
{
    char hex[100];
    ll n,j=0;
    scanf("%lld",&n);

    while(n>0){
        int rem=n%16;

        if(rem>9){
            hex[j++]=55+rem;
        }
        else{
            hex[j++]=48+rem;
        }
        n/=16;
    }
    hex[j]='\0';  
    printf("%s\n",strrev(hex));    
    return 0;
}
