#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    while (a > 0) { 
        for (int j = a--; j > 0; j--) { 
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}
