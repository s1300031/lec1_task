#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void){
    int D1,D2,total;
    char name[50];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello,%s!\n",name);
    printf("Rolling dice...\n");
    srand((unsigned int)time(NULL));
    D1=rand()%6+1;
    D2=rand()%6+1;
    total=D1+D2;
    printf("Die 1: %d\n",D1);
    printf("Die 2: %d\n",D2);
    printf("Total value: %d\n",total);
    if(7<total){
        printf("%s won!\n",name);
    }
    else{
        printf("%s lost.\n",name);
    }
    return 0;
}