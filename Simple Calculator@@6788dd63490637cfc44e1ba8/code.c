#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    char c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf(" %c",&c);
    int x = a*b;
    int y = a/b;
    int z = a+b;
    int r = a-b;
    switch(c){
        case '+':
            printf("%i",z);
            break;
        case '-':
            printf("%i",r);
            break;
        case '*':
        if(x ==0){
            printf("error");
        }
        else{
            printf("%i",x);
            break;
        }
        case '/':
        if (y==0){
            printf("error");
            break;
        }
        else{
            printf("%i",y);
            break;
        }
        default:
            printf("error");
    }
    return 0;
}
