#include<stdio.h>
int main(){
    int a,m;
    scanf("%i",&a);
    for(int i=1;i<=10;i++){
        m = a * i;
        printf("%i x %i = %i",a,i,m);
        printf("\n");
    }
}