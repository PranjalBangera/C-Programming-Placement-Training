#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter: ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;
        case '*': printf("%.2f", a * b); break;
        case '/': printf("%.2f", a / b); break;
        default: printf("Invalid Operator");
    }

    return 0;
}