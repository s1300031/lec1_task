#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void){
    int D1,D2,total;
    printf("Rolling dice...\n");
    srand((unsigned int)time(NULL));
    D1=rand()%6+1;
    D2=rand()%6+1;
    total=D1+D2;
    printf("Die 1: %d\n",D1);
    printf("Die 2: %d\n",D2);
    printf("Total value: %d\n",total);
    return 0;
}