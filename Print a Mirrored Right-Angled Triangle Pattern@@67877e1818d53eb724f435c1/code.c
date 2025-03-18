#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=1;i<=0;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}