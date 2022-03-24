#include<stdio.h>
#include<string.h>
//Beecrowd-1049

int main()
{

    char str1[]="vertebrado",str11[]="ave",str12[]="carnivoro",str13[]="onivoro";
    char str21[]="inseto",str22[]="hematofago";

    char name1[24],name2[24],name3[24];

    scanf("%s %s %s",name1,name2,name3);


    if(strcmp(name1,str1)==0){
        if(strcmp(name2,str11)==0){
            if(strcmp(name3,str12)==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(strcmp(name3,str13)==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if(strcmp(name2,str21)==0){
            if(strcmp(name3,str22)==0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(strcmp(name3,str22)==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }




    return 0;
}