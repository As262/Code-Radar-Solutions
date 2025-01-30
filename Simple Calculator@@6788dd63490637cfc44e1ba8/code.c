#include<stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf(" %c",&c);
    int x = a*b;
    int y = a/b;
    int z = a+ b;
    int r = a-b;
    switch(c){
        case '+':
            printf("%i",z);
            break;
        case '-':
            printf("%i",r);
            break;
        case '*':
            printf("%i",x);
            break;
        case '/':
            printf("%i",y);
            break;
    }
    return 0;
}