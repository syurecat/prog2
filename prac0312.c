#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int n;

	puts("整数を入力せよ：");
	scanf("%d", &n);

	switch (n % 2){
        case 0 : puts("その数は偶数です。"); break;
		case 1 : puts("その数は奇数です。"); break;
    }

	return 0;
}
