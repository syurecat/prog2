#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
	console_use_utf8();
	int a;

	printf("整数を入力せよ：");   scanf("%d", &a);

    printf("絶対値は%dです。/n", (a < 0) ? -a : a);

	return 0;
}
