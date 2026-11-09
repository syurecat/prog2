#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
	int a, b, c;

	puts("三つの整数を入力せよ。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);
    printf("整数C：");   scanf("%d", &c);

    if(a != b && b != c && c != a){
        puts("三つの値が異なります。");
    }else if (a == b && b == c){
        puts("三つの値は等しいです。");
    }else{
        puts("二つの値が等しいです。");
    }

	return 0;
}
