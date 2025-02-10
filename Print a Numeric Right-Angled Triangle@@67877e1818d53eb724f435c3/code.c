#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=0;i<a;i++){
        for(int j=1;j<=i+1;j++){
            printf("%i",j);
        }
    printf("\n");
    }
    return 0;
}