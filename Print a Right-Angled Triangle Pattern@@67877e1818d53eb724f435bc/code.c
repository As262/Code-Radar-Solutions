#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;j<=i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
}