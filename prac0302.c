
#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
	console_use_utf8();
	int no;

	printf("整数を入力せよ：");
	scanf("%d", &no);

	if (no == 0){
		puts("その数は０です。");
    }else if (no > 0){
		puts("その数は正です。");
    }else if (no < 0){
		puts("その数は負です。");
    }

	return 0;
}
