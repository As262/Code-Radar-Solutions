#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if(a==1){
        printf("*");
    }
    else if(a!=1){
        for(int i=1;i<=a;i++){
            for(int j=a;j>i;j--){
                printf(" ");
            }
            for (int k=1;k<=i;k++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
}