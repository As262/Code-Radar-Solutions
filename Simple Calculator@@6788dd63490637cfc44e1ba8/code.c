#include<stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%c",&c);
    float x = a*b;
    float y = a/b;
    float z = a+ b;
    float r = a-b;
    switch(c){
        case '+':
            printf("%f",z);
            break;
        case '-':
            printf("%f",r);
            break;
        case '*':
            printf("%f",x);
            break;
        case '/':
            printf("%f",y);
            break;
    }
    return 0;
}