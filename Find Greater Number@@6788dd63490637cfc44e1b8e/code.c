#include<stdio.h>
int main(){
    int a,b;
    scanf("%i%i",&a,&b);
    if(a<b){
        printf("%i",b);
    }
    else{
        printf("%i",a);
    }
    return 0;
}