#include <stdio.h>

int main(void)
{
	int a, b;

	puts("二つの整数を入力せよ。");
	printf("整数A：");   scanf("%d", &a);
	printf("整数B：");   scanf("%d", &b);

    if(b == 0){
        printf("0で除算はできません。\n");
    }else if (a % b){
        printf("BはAの約数です。\n");
    }else{
        printf("BはAの約数ではありません。\n");
    }

	return 0;
}
