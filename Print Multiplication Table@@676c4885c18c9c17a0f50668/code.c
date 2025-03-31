#include<stdio.h>
int main(){
    int a,m;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        m = 2 * i;
        printf("2 x %i = %i",i,m);
        printf("\n");
    }
}