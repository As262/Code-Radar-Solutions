#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for (int i=0;i<a;i++){
        for (int j=0;j<=i;j++){
            printf("  ")
            for (int k =0;k<=j;k++){
                printf("*");
            }
        }
    printf("\n");
    }
    return 0;
}