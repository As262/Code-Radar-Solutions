#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%i",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    int x = a*b;
    int y = a/b;
    int z = a+ b;
    int r = a-b;
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