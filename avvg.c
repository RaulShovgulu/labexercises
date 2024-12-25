#include<stdio.h>
int main(){
    int height1, height2, height3;
    int avg;
    printf("height1 = 10");
    scanf("%d, &height1");

    printf("height2 = 16");
    scanf("%d, &height2");

    printf("height3 = 19");
    scanf("%d, height3");

    avg = (height1 + height2 + height3)/3;
    printf( "The avg height of these three persons is %d\n", avg);
    
    return 0;

}