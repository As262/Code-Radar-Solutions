#include<stdio.h>
int main(){
    int a,b;
    scanf("%i %i",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%i %i",a,b);
}