#include<stdio.h>
int main(){
    int a,b;
    b=1;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;j<i;j++){
            printf("%i ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}