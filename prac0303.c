#include <stdio.h>

int main(void)
{
	int a;

	printf("整数を入力せよ：");   scanf("%d", &a);

    printf("絶対値は%dです。/n", (a < 0) ? -a : a);

	return 0;
}
