#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if(a&(1<<31)){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
    return 0;
}