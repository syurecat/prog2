#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int a, b;

	puts("二つの整数を入力せよ。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);

    int result = a - b
    if(result < 0)
        result = -result;
    if(result > 11){
        puts("それらの差は11以上です。");
    }else{
        puts("それらの差は10以下です。");
    }

	return 0;
}
