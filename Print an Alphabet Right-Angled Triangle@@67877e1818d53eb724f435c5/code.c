#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;j<=a-i;j++){
            printf("* ");
        }
        pritnf("\n");
    }
    return 0;
}