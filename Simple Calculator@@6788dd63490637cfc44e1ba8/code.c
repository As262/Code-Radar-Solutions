#include<stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%i",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    float x = a*b;
    float y = a/b;
    float z = a+ b;
    float r = a-b;
    switch(c){
        case '+':
            printf("%i",z);
            break;
        case '-':
            printf("%d",r);
            break;
        case '*':
            printf("%d",x);
            break;
        case '/':
            printf("%d",y);
            break;
    }
    return 0;
}