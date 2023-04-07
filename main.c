#include <stdio.h>
#include <math.h>

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

double sqrt(double num) {
    return sqrt(num);
}

double power(double num, int m) {
    return pow(num, m);
}

int main() {
    char operator;
    double num1, num2, result;
    int m;

    printf("Enter an operator (+, -, *, /, s, p): ");
    scanf("%c", &operator);

    switch (operator) {
        case '+':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = add(num1, num2);
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = subtract(num1, num2);
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = multiply(num1, num2);
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = divide(num1, num2);
            printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            break;
        case 's':
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            printf("sqrt(%.2lf) = %.2lf", num1, result);
            break;
        case 'p':
            printf("Enter a number and the power: ");
            scanf("%lf %d", &num1, &m);
            result = power(num1, m);
            printf("%.2lf^%d = %.2lf", num1, m, result);
            break;
        default:
            printf("Error: Invalid operator");
            return 1;
    }

    return 0;
}
