#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
	console_use_utf8();
	int n;

	puts("正の整数を入力せよ：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		putchar('0' + i % 10);
	}
	return 0;
}
