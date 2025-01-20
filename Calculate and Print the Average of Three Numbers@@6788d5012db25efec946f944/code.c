#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%i", &a);
    int b;
    scanf("%i", &b);
    int c;
    scanf("%i",&c);
    float d = (a + b + c)/3;
    printf("Average: %.2f",d );
    return 0;
    }