#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=0;i<=a;i++){
        for(int j =1;j<=a-i;j++){1
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%i", k);
        }
        printf("\n");
    }
}