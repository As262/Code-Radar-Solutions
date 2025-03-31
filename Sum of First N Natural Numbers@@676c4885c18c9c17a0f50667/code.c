#include<stdio.h>
int main(){
    int a,sum;
    sum=0;
    scanf("%i",&a);
    for(int i =1;i<=a;i++){
        sum= sum +i;
    }
    printf("%i",sum);
}