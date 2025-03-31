#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i =1;i<=a;i++){
        for(int j=0;j<=a-i;j++){
            printf(" ");
        }
        for(int y =1;y<=i;y++){
            printf("%i",y);
        }
        for(int k =i-1;k>=1;k--){
            printf("%i",k);
        }
        printf("\n");
    }
}