#include<stdio.h>

//Beecrowd-1042

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int arr[3];
    arr[0]=a;arr[1]=b;arr[2]=c;

    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    printf("%d\n%d\n%d\n\n",arr[0],arr[1],arr[2]);
    printf("%d\n%d\n%d\n",a,b,c);


    return 0;
}