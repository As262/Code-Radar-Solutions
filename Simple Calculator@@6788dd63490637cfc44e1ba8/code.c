#include<stdio.h>
int main(){
    float a, b;
    char c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf(" %c", &c);  // Note the space before %c
    
    float x = a * b;
    float y = a / b;
    float z = a + b;
    float r = a - b;

    switch(c) {
        case '+':
            printf("%.2f", z);
            break;
        case '-':
            printf("%.2f", r);
            break;
        case '*':
            printf("%.2f", x);
            break;
        case '/':
            if (b != 0) {
                printf("%.2f", y);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
