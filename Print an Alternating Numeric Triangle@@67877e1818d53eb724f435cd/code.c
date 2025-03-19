#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i =0;i<=a;i++){
        int b= i %2;
        for(int j=0;j<=i;j++){
            printf("%i ",b);
        }
        printf("\n");
    }
}