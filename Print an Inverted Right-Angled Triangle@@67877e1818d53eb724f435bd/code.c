#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    while(a>0){
        for (int j=a--;j>0;j--){
            printf("* ");
        }
        putchar('\n');
    }
}