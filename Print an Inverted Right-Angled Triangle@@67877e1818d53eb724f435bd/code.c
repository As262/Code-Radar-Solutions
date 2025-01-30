#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a); // Using %d for integer input
    while (a > 0) {  // Use a single loop instead of two nested loops
        for (int j = a--; j > 0; j--) { 
            putchar('*'); // Faster than printf for single characters
        }
        putchar('\n'); // Faster than printf for new lines
    }
    return 0;
}
