#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
	console_use_utf8();
	int a[5];

	for(int i = 5; i >= 0; i--)
		a[i] = i + 1;
	
	for(int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
