#include <stdio.h>

void change_path(char *str, char *dst)
{
	while (*str != '\0')
		printf("%c", *str++);
}
