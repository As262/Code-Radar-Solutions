
#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%i",&a);
    for (i=0;i<=a;i++){
        for (j=0;j<=a -i;j++){
            printf(" ");
        }
    for (j=1;j<=2*i-1;j++){
                printf("*");
    }

    printf("\n");
    }
    return 0;
}
