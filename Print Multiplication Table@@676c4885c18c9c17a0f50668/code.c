#include<stdio.h>
int main(){
    int a,b;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        b = a * i;
        printf("%i x %i = %i",a,i,b);
        printf("\n");
    }
    return 0;
}