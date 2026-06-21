#include <stdio.h>
#include "prime.h"

void isPrime() {
    int n, flag = 1;

    printf("输入数字: ");
    scanf("%d", &n);

    if (n <= 1) flag = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag) printf("质数\n");
    else printf("不是质数\n");
}