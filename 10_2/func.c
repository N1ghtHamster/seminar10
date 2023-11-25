#include <stdio.h>
#include <string.h>

void delete_space(char *str, char *dst)
{
    int i = 0;
    while (*str == ' ')
	{
		str++;
	}
    while (*str != '\0')
    {
        if (*str != ' ' || (*str == ' ' && *(str + 1) != ' '))
        {
			*dst = *str;
			dst++;
        }
        i++;
        str++;
    }
    if (*(dst - 1) == ' ')
		*(dst - 1) = '\0';
	*dst = '\0';
}

