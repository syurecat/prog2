#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int n;
	int ans = 0;

	puts("nの値：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		ans += i;
	}

	printf("1から%dまでの総和は%dです。", n , ans);

	return 0;
}
