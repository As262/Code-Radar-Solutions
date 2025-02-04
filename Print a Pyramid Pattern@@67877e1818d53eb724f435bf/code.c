#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for (int i=0;i<a;i++){
        printf(" ");
        for (int j=0;j<i;j++){
            for (int k =0;k<=j;k++){
                printf("*");
            }
        }
    printf("\n");
    }
    return 0;
}