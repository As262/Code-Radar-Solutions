#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%i%i%c",&a,&b,&c);
    int x = a*b;
    int y = a/b;
    int z = a+ b;
    int r = a-b;
    switch(c){
        case *:
        printf("%i",a*b);
        break;
        case /:
        printf("%i",a/b);
        break;
        case +:
        printf("%i", a+b);
        break;
        case -:
        printf("%i",a-b);
        break
    }
    return 0;
}