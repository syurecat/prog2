#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
	console_use_utf8();
	int sum = 0;
	int cnt = 0;
	int retry;
	do {
		int t;

		printf("整数値を入力せよ：");
		scanf("%d", &t);

		sum = sum + t;
		cnt = cnt + 1;

		printf("まだ？<Yes…0/No…9>：");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("合計は%dで平均は%.4fです。\n", sum, (double)sum / cnt);

	return 0;
}
