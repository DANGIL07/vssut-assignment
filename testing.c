#include <stdio.h>
int main() {
    int a, b;
    int sum, sub, mul;
    float div;
    printf("Enter any two positive integer numbers:\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    printf("\n");
    printf("Addition of       %d + %d = %d\n", a, b, sum);
    printf("Subtraction of    %d - %d = %d\n", a, b, sub);
    printf("Multiplication of %d * %d = %d\n", a, b, mul);
    printf("Division of       %d / %d = %f\n", a, b, div);
    return 0;
}