#include <stdio.h>
int main(){
    int a,b;
    char c;
    int d = a+b;
    int e=a*b;
    int f=a-b;
    int g=a/b;
    scanf("%i%i%c",&a,&b,&c);
    if(c=='+'){
        printf("%i",d);
    }
}