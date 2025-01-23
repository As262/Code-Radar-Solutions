#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    if(a>b&&a>c){
        printf("%i",a);
    }
    else if(b>c&&b>a){
        printf("%i",b);
    }
    else{
        printf("%i",c);
    }
    return 0;
}