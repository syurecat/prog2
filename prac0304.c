#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int a, b;

	puts("二つの整数を入力せよ。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);

    if(a < b){
        printf("AはBより小さいです。\n");
    }else if (a > b){
        printf("AはBより大きいです。\n");
    }else{
        printf("AとBは等しいです。\n");
    }

	return 0;
}
