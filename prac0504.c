#include <stdio.h>
#include "console_utf8.h"

#define LEN 7

int main(void)
{
	console_use_utf8();
	int x[LEN];

	for(int i = 0; i < LEN; i++){
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for(int i = 0; i < LEN / 2; i ++){
		int t = x[i];
		x[i] = x[LEN - 1 - i];
		x[LEN - 1 -i] = t;
	}
	
	puts("hanten");
	for(int i = 0; i < LEN; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
