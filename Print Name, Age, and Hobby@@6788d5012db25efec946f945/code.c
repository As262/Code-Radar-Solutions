#include <stdio.h>

int main(){
    char a[20];
    scanf("%s", &a);
    int b;
    scanf("%i",&b);
    char c[20];
    scanf("%s", &c);
    printf("Name: %s\nAge: %i\n\nHobby: %s\n",a,b,c);
    return 0;
}