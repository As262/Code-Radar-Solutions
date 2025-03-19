#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    while(a>0){
        for(int j=1;j<a;j++){
            printf("%i ",j);
        }
        putchar('\n');
    }
    return 0;
}