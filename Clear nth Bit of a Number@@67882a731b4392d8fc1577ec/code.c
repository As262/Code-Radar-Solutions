#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%u",a &~(1<<b));
    return 0;
}