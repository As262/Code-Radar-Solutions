#include <stdio.h>

int main() {
    int a, i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }

    return 0;
}
