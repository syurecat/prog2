#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int n1, n2;

	puts("二つの整数を入力せよ。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

    int result = n1 - n2;
    if(result < 0){
        result = -result;
    }

	printf("それらの差は%dです。\n", result);

	return 0;
}
