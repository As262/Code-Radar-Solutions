#include <stdio.h>
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
        case '*':
            printf("%i",x);
            break;
        case '/':
            printf("%i",y);
            break;
        case '+':
            printf("%i",z);
            break;
        case '-':
            printf("%i",r);
            break;
    }
    return 0;
}