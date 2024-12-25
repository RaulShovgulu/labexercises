#include<stdio.h>
int main(){
    int n;
    double sum = 0;
    
    scanf("%d", &n);
    int i = 0;
    while (i<n){
        double num;
        scanf("%lf", &num);
        sum += num;
        i++;
         }

         printf("%lf\n", sum);
return 0;
}