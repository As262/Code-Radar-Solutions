#include<stdio.h>
int main(){
    int a,b;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        b =  i % 2;
        for(int j=0;j<=i;j++){
            printf("%i",j);
            b= 1-b;
        }
        printf("\n");
    }
}