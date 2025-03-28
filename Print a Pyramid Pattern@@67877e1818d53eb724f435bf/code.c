#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;i<=a-i;j++){
            printf(" ");
        }
        for(int k= 1;k<=2*i-1;k++){
            printf("*");    
        }
        printf("\n");
    }
}