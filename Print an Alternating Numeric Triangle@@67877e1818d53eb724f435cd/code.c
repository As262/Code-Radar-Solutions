#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i =1;i<=a;i++){
        int b= i %2;
        for(int j=1;j<=i;j++){
            printf("%i ",b);
            b=1-b;
        }
        printf("\n");
    }
}