#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if(a==1){
        printf("*");
    }
    else if(a!=1){
        for(int i=1;i<a;i++){
            printf(" ");
            for(int j=0;j<=2*i -1;j++){
                printf(" *");
            }
            printf("\n");
        }
    }
    return 0;
}