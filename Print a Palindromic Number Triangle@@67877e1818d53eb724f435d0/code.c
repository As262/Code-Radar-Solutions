#include <stdio.h>

void palindromic_number_triangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n"); // Move to the next row
    }
}

int main() {
    int rows;
    scanf("%d", &rows);
    palindromic_number_triangle(rows);
    return 0;
}