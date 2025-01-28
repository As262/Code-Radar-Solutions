#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=a;i>=0;i--){
        for(int j= 0;j<i;i++){
            printf("*");
        }
        printf("\n")
    }
    return 0;
}