#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if (a=1){
        printf("*");
    }
    else{
        for(int i=0;i<a;i++){
            printf(" ");
            for(int j=0;j<=i;j++){
                printf(" *");
            }
            printf("\n")
        }
    }
}