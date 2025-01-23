#include <stdio.h>
int main() {
    int a,b;
    scanf("%i%i",&a,&b);
    printf("%u", a>>b);
    return 0;
}