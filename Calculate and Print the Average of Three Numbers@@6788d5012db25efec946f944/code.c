#include<stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    float b;
    scanf("%f", &b);
    float c;
    scanf("%f",&c);
    float d = (a+b+c)/3;
    printf("Average: %.2f",d);
    return 0;
    }