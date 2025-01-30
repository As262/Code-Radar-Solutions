#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if(a%a==0 &&a%1==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}