#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c = 1<<b;
    int d = a ^ c;
    printf("%i",d);
    return 0;
}