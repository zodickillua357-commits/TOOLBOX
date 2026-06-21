#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "calc.h"
#include "prime.h"

void showMenu() {
    int choice;

    printf("\n====== TOOLBOX ======\n");
    printf("1. 计算器\n");
    printf("2. 判断质数\n");
    printf("0. 退出\n");
    printf("请选择: ");

    scanf("%d", &choice);

    switch (choice) {
        case 1: calculator(); break;
        case 2: isPrime(); break;
        case 0:
            printf("退出\n");
            exit(0);
        default:
            printf("无效选项\n");
    }
}