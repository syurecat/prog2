#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int no;

	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	int i = 1;
	while (i <= no){
		printf("%d ", i++);
		printf("\n");
	}

	return 0;
}
