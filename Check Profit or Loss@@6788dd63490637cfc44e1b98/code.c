#include <stdio.h>
int main(){
    int a,b;
    scanf("%i %i",&a,&b);
    if(a>b){
    printf("Loss");
    }
    else if(b>a){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}