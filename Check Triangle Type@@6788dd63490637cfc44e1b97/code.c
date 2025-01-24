#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    if (a==b&&b==c&&a==c){
        printf("Equilateral");
    }
    else if(a==b&&a!=c||a==c&&b!=c||a!=b&&b==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}
