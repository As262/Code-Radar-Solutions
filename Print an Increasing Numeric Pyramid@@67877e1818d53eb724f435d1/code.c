#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;j<=a-i;j++){
            printf(" ");
        }
        for(int k= 1;k<=i;k++){
            printf("%i ",k);
        }
        printf("\n");
    }
}