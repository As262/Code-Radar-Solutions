#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i =1;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==0||i==a-1||j==0||j==a-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}