#include <stdio.h>
#include "console_utf8.h"

int main(void)
{
    console_use_utf8();
    printf("   |");
    for (int i = 1; i <= 9; i++)
        printf("%3d", i);

    printf("\n---+---------------------------\n");

    for (int i = 1; i <= 9; i++) {
        printf("%2d |", i);

        for (int j = 1; j <= 9; j++)
            printf("%3d", i * j);

        putchar('\n');
    }
	return 0;
}
