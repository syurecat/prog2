#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int a, b, c;

	puts("三つの整数を入力せよ。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);
    printf("整数C：");   scanf("%d", &c);

    int min = (a < b) ? ((a < c) ? a : c)
                      : ((b < c) ? b : c);

    printf("最小値は%dです。\r\n", min);

	return 0;
}
