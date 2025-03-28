#include<stdio.h>
int main(){
    int a;
    int b=0;
    scanf("%i",&a);
    for(int i=0;i<=a;i++){
        for(int j=0;j<i;j++){
            printf("%i ",b);
            b++;
        }
        printf("\n");
    }
}