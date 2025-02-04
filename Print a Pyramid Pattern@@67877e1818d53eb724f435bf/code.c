#include <stdio.h>

int main() {
    int N, i, j;

    // Read the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop through each row
    for (i = 1; i <= N; i++) {
        // Print spaces
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
