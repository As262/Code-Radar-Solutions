#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if(a<18){
        printf("Not Eligible");
    }
    else{
        printf("Eligible");
    }
    return 0;
}