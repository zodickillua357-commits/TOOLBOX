#include <stdio.h>
#include "calc.h"

void calculator() {
    double a, b;
    char op;

    printf("输入表达式: ");
    scanf("%lf %c %lf", &a, &op, &b);

    if (op == '+') printf("%f\n", a + b);
    else if (op == '-') printf("%f\n", a - b);
    else if (op == '*') printf("%f\n", a * b);
    else if (op == '/') {
        if (b != 0) printf("%f\n", a / b);
        else printf("错误\n");
    } else {
        printf("不支持\n");
    }
}