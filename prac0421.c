#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
	console_use_utf8();
	int n;

	printf("正方形を作ります\n");
	printf("何段ですか：");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
